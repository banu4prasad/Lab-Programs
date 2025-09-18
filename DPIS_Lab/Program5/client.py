import socket, ssl

HOST, PORT = "127.0.0.1", 4443
# SSL context (client mode)
context = ssl.create_default_context(ssl.Purpose.SERVER_AUTH, cafile="cert.pem")

with socket.create_connection((HOST, PORT)) as sock:
    with context.wrap_socket(sock, server_hostname="localhost") as ssock:
        print("TLS connection established!")
        msg = "Hello Secure World!"
        print(" Sending:", msg)
        ssock.sendall(msg.encode())
        
        reply = ssock.recv(1024).decode()
        print("Received from server:", reply)