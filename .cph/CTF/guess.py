import socket
import random

def guesser_game():
    host = '159.223.57.20'
    port = 1337

    # Create a socket object
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    # Connect to the server
    s.connect((host, port))

    # Receive the initial message
    data = s.recv(1024)
    print(data.decode())

    # Send the "Withdraw money" option 100 times
    for _ in range(102):
        s.sendall(b'2\n')
        data = s.recv(1024)
        print(data.decode())

        # Send the amount to withdraw
        if _ == 0:
            s.sendall(b'-10\n')
        else:
            s.sendall(b'-10\n')

    # Send the "Play game" option
    s.sendall(b'1\n')

    # Play the game 1000 times
    for _ in range(1000):
        # Receive the game prompt
        data = s.recv(1024)
        print(data.decode())

        # Send a random guess between 1 and 10
        guess = str(random.randint(1, 10))
        s.sendall(guess.encode() + b'\n')

        # Receive the game response
        data = s.recv(1024)
        print(data.decode())

    # Close the socket
    s.close()

guesser_game()