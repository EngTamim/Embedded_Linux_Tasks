// Task 5
// Handle interrupt signal like (ctrl+c)

#include <iostream>
#include <csignal>
#include <cstdlib>

void signalHandler(int signum) {
    std::cout << "Interrupt signal (" << signum << ") received.\n";
    exit(signum);
}

int main() {
    signal(SIGINT, signalHandler);

    std::cout << "Press Ctrl+C to trigger the interrupt signal.\n";

    while (true) {
       
    }

    return 0;
}
