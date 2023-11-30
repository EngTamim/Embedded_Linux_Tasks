// LastSlideTasks1:
// Write code to catch interrupt signal and print exit before termination

#include <iostream>
#include <csignal>
#include <cstdlib>

// Signal handler function
void signalHandler(int signal) {
    if (signal == SIGINT) {
        std::cout << "Received interrupt signal (Ctrl+C). Exit....\n";
        exit(signal); // or perform any cleanup before exit
    }
}

int main() {
    // Set up the signal handler
    signal(SIGINT, signalHandler);

    
    while (true) {
   
    }

    return 0;
}

