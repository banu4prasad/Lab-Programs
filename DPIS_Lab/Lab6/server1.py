#!/usr/bin/env python3
# server.py - minimal server
import socket

HOST, PORT = "127.0.0.1", 9001
BUFSIZE = 4096

with socket.socket() as s:
    s.bind((HOST, PORT))
    s.listen(1)
    print("[Server] listening on", (HOST, PORT))
    conn, addr = s.accept()
    with conn:
        print("[Server] connection from", addr)
        data = conn.recv(BUFSIZE)
        if not data:
            print("[Server] no data")
        else:
            print("[Server] received:", data.decode(errors="replace"))
            conn.sendall(b"Server->Client: ACK")
            print("[Server] sent ACK")

