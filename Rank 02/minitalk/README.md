# minitalk 
Minitalk is designed to learn and practice interprocess communication on Unix systems through the use of signals. The project is made up of two programs: a client and a server. The client sends messages to the server, which receives and displays them.

### Project Objectives

- Learn to use signals in Unix (SIGUSR1 and SIGUSR2).
- Implement communication between processes.
- Manage synchronization and transmission of data between processes.

### Components
- client: The client is responsible for sending a message to the server. Use signals to transmit each character of the message to the server.

- server: The server waits for messages from clients and displays the complete message once received. Use signals to receive each character of the message.

### How to run

#### Compiling the Project:
```
$> make all
```
#### Start the Server:
```
$> ./server
```
This will display the server's PID, which you will need so the client can send messages to it.

#### Send a message from the Client (in another terminal):
```
$> ./client <SERVER_PID> "Your message here"
```

# Implementation Details
- Signal Handling: The server and client use SIGUSR1 and SIGUSR2 signals to transmit data. Each signal can represent a bit, allowing the transmission of characters bit by bit.
- Synchronization: The client waits for an acknowledgment from the server after sending each bit to ensure that the message is correctly received.
- Error Handling: Both the client and server include error handling to manage invalid PIDs, signal interruptions, and other potential issues.

# Extras
Minitalk teaches how to use Unix signals (like SIGUSR1 and SIGUSR2) for communication. In Minishell, signal handling is crucial for managing interactive behavior, such as responding to Ctrl+C (SIGINT) to terminate running processes. Minitalk also involves sending and receiving messages between processes. 
Minishell needs to manage IPC for features like job control, pipelines (|), and potentially even custom built-in commands that interact with other processes.
Finally to understanding how to create and manage processes using fork() and exec() in Minitalk is directly applicable to Minishell, where you need to execute commands by creating child processes.

-Born2code

![42madrid](https://github.com/ismaelucky342/Born2code/assets/153450550/3a377f34-9156-4eff-b04b-71c4b128523e)
