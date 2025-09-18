### How to Run
---

## 🔑 Generate SSL Certificate
Before running the programs, generate a self-signed certificate and private key in the terminal:

```bash
openssl req -x509 -newkey rsa:2048 -keyout key.pem -out cert.pem -days 365 -nodes
```

Common Name (e.g. server FQDN or YOUR name) []:localhost
 Rest all enter dont enter any value

 same terminal 
 python3 server.py

new terminal 

python3 client.py
