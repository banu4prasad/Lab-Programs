from Crypto.Cipher import AES 
from Crypto.Random import get_random_bytes

def encrypt(message, key):
    cipher=AES.new(key, AES.MODE_EAX)
    nonce=cipher.nonce
    ciphertext, tag=cipher.encrypt_and_digest(message)
    return ciphertext,nonce,tag

def decrypt(ciphertext, key, nonce, tag):
    cipher = AES.new(key,AES.MODE_EAX, nonce=nonce)
    plaintext=cipher.decrypt_and_verify(ciphertext, tag)
    return plaintext

key=get_random_bytes(16)
plaintext=b'This is a secret message'
ciphertext,nonce,tag= encrypt(plaintext, key)

decrypted_text = decrypt(ciphertext, key, nonce, tag)
print("decrypted message:", decrypted_text.decode("utf-8"))

