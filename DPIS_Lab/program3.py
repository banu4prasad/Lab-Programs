#Implement Digital Signature Schemes

from Crypto.Signature import PKCS1_v1_5
from Crypto.Hash import SHA256
from Crypto.PublicKey import RSA

#Generate RSA key pair (public+private)
key=RSA.generate(2048)

#function to sign a message with private key
def sign_message(message, private_key):
    #create SHA-256 hash opf the msg
    h = SHA256.new(message)
    #Create signer object with private key
    signer=PKCS1_v1_5.new(private_key)
    
    #Generate digital signature
    signature=signer.sign(h)
    return signature

#function to verify a digital signature

def verify_signature(message,signature, public_key):
    #recompute SHA-256 hash
    h=SHA256.new(message)
    
    #create verifier object with private key
    verifier = PKCS1_v1_5.new(public_key)
    
    #verify sign
    return verifier.verify(h, signature)

#example usage
message = b'This is a secret msg' 

#sign the message using the public key
signature=sign_message(message, key)
is_valid = verify_signature(message, signature, key.public_key())

print("is signature valid?", is_valid)