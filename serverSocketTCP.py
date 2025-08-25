import socket

# Configurações do servidor
HOST = 'localhost' 
PORT = 3000         # Porta para comunicação

# Criação do Socket 
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Associação do socket ao IP e porta
server_socket.bind((HOST, PORT))
server_socket.listen(1)  

print(f"Servidor iniciado em {HOST}:{PORT}. Aguardando conexão...")

# Aguarda conexão do cliente
conn, addr = server_socket.accept()
print(f"Conectado por {addr}")

while True:
    dados = conn.recv(1024)  # Recebe até 1024 bytes
    if not dados:
        break

    comando = dados.decode()
    print(f"Comando recebido: {comando}")

    # Respostas programadas conforme Ação do Client
    if comando.lower() == 'status':
        resposta = 'Máquina operando normalmente.'
    elif comando.lower() == 'parar':
        resposta = 'Comando recebido: Parando a máquina.'
    elif comando.lower() == 'sair':
        resposta = 'Desconectando do servidor.'
        conn.sendall(resposta.encode())
        break
    elif comando.lower() == 'hello':
        resposta = "What's up, my friend?"
    elif comando.lower() == 'd':
        from datetime import datetime
        hora_atual = datetime.now().strftime("%H:%M:%S")
        resposta = f"Hora atual do servidor: {hora_atual}"
        conn.sendall(resposta.encode())
        break
    else:
        resposta = 'what?'

    # Enviar resposta ao cliente
    conn.sendall(resposta.encode())

# Encerramento da Conexão
conn.close()
print("Servidor finalizado.")
