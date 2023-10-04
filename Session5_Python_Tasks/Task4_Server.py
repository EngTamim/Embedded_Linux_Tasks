# Task4 Server

import socket
import threading

# Define the server's IP address and port
SERVER_IP = "127.0.0.1"
SERVER_PORT = 12345

# Create a socket object
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Bind the socket to the server's IP address and port
server_socket.bind((SERVER_IP, SERVER_PORT))

# Listen for incoming connections
server_socket.listen(5)
print(f"Server is listening on {SERVER_IP}:{SERVER_PORT}")

# List to store client threads
client_threads = []

# Function to handle each client connection
def handle_client(client_socket):
    try:
        while True:
            data = client_socket.recv(1024)
            if not data:
                break  # Client disconnected
            # Process and respond to client data here, if needed
    except Exception as e:
        print(f"Error: {e}")
    finally:
        client_socket.close()

# Accept and handle incoming client connections
try:
    while True:
        client_socket, client_address = server_socket.accept()
        print(f"Accepted connection from {client_address}")
        
        # Create a new thread to handle the client
        client_thread = threading.Thread(target=handle_client, args=(client_socket,))
        client_thread.start()
        client_threads.append(client_thread)
except KeyboardInterrupt:
    print("Server shutting down...")
    for client_thread in client_threads:
        client_thread.join()
    server_socket.close()
