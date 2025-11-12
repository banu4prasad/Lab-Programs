#Implement Digital Signature Schemes

from Crypto.Signature import PKCS1_v1_5
from Crypto.Hash import SHA256
from Crypto.PublicKey import RSA

key=RSA.generate(2048)

#function to sign a message with private key
def sign_message(message, private_key):
    h = SHA256.new(message)
    signer=PKCS1_v1_5.new(private_key)
    signature=signer.sign(h)
    return signature

#function to verify a digital signature
def verify_signature(message,signature, public_key):
    h=SHA256.new(message)
    verifier = PKCS1_v1_5.new(public_key)
    return verifier.verify(h, signature)

#example usage
message = b'This is a secret msg' 
signature=sign_message(message, key)
is_valid = verify_signature(message, signature, key.public_key())
print("is signature valid?", is_valid)