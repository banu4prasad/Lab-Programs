import socket, ssl
HOST, PORT = "127.0.0.1", 4443
# Create SSL context (server mode)
context = ssl.SSLContext(ssl.PROTOCOL_TLS_SERVER)
context.load_cert_chain(certfile="cert.pem", keyfile="key.pem")
# Create TCP socket
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM, 0)
sock.bind((HOST, PORT))
sock.listen(5)
print(f"Server listening on {HOST}:{PORT} with TLS...")
with context.wrap_socket(sock, server_side=True) as ssock:
 conn, addr = ssock.accept()
 print("Secure connection from", addr)
 data = conn.recv(1024).decode()
 print("Received (after decryption):", data)
 conn.sendall(b"Secure Reply: " + data.encode())
 conn.close()