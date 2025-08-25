import socket

# Configurações para conectar ao servidor
HOST = 'localhost'
PORT = 3000

# Criação do socket TCP
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Conexão com o servidor
client_socket.connect((HOST, PORT))
print(f"Conectado ao servidor {HOST}:{PORT}")

# Loop de envio de comandos
while True:
    comando = input("Digite Hello ou um comando (status, parar, sair): ")
    client_socket.sendall(comando.encode())

    resposta = client_socket.recv(1024).decode()
    print(f"Servidor: {resposta}")

    if comando.lower() == 'sair':
        break

# Encerra a conexão
client_socket.close()
print("Conexão encerrada.")
