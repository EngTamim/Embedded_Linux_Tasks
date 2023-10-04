# Task4 Client

import socket
import threading

# Define the server's IP address and port
SERVER_IP = "127.0.0.1"
SERVER_PORT = 12345

# Create a socket object
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Connect to the server
client_socket.connect((SERVER_IP, SERVER_PORT))
print(f"Connected to server at {SERVER_IP}:{SERVER_PORT}")

# Function to receive data from the server
def receive_data():
    try:
        while True:
            data = client_socket.recv(1024)
            if not data:
                break  # Server disconnected
            print(f"Received from server: {data.decode('utf-8')}")
    except Exception as e:
        print(f"Error: {e}")
    finally:
        client_socket.close()

# Start a thread to receive data from the server
receive_thread = threading.Thread(target=receive_data)
receive_thread.start()

try:
    while True:
        message = input("Enter a message to send to the server (or 'exit' to quit): ")
        if message.lower() == "exit":
            break
        client_socket.send(message.encode('utf-8'))
except KeyboardInterrupt:
    print("Client shutting down...")
    client_socket.close()
