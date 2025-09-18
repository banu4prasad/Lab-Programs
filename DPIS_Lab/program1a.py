from Crypto.Cipher import DES 
from Crypto.Util.Padding import pad, unpad
from Crypto.Random import get_random_bytes

key=b'8bytekey'
data= b'HelloSymmetric DES'

padded_data = pad(data, DES.block_size)
print("padded data:", padded_data)

cipher=DES.new(key, DES.MODE_ECB)
ciphertext=cipher.encrypt(padded_data)
print("encyrpted(cipher text):", ciphertext)

decipher=DES.new(key, DES.MODE_ECB)
decrypted_padded=decipher.decrypt(ciphertext)
decrypted=unpad(decrypted_padded, DES.block_size)
print("Decrypted (Plaintext):", decrypted)
