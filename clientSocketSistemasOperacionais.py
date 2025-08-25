import socket
import threading
import cv2
import pyautogui
import os

client_socket = None

def connect_to_server():
    global client_socket
    client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    client_socket.connect(("127.0.0.1", 8080))
    threading.Thread(target=receive_data).start()

def receive_data():
    while True:
        data = client_socket.recv(1024).decode()
        if data:
            parse_and_execute_command(data)

def parse_and_execute_command(command):
    if command == "invert_mouse":
        pyautogui.move(-10, -10)  
    elif command == "lock_mouse":
        pyautogui.moveTo(500, 500)  
    elif command == "shutdown_monitor":
        if os.name == 'nt': 
            os.system("nircmd.exe monitor off")  
        else:  
            os.system("xset dpms force off") 

def show_menu():
    while True:
        print("\n--- Menu Client ---")
        print("1. Enviar mensagem para o server")
        print("2. Conectar em um chat")
        print("3. Transmitir vídeo da webcam")
        print("4. Sair")
        option = input("Escolha uma opção: ")

        if option == "1":
            message = input("Digite a mensagem para o server: ")
            client_socket.send(message.encode())
        elif option == "2":
            print("Conectando ao chat...")
            chat()
        elif option == "3":
            print("Iniciando transmissão de vídeo...")
            stream_video()
        elif option == "4":
            break
        else:
            print("Opção inválida.")

def chat():
    while True:
        message = input("Mensagem: ")
        client_socket.send(message.encode())
        if message == "sair":
            break

def stream_video():
    cap = cv2.VideoCapture(0)
    while cap.isOpened():
        ret, frame = cap.read()
        if ret:
            _, buffer = cv2.imencode('.jpg', frame)
            client_socket.sendall(buffer.tobytes())
        else:
            break
    cap.release()

connect_to_server()
show_menu()
