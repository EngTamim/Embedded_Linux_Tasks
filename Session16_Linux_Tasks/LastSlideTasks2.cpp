// LastSlideTasks2
// Write code which whenever runs it kills all firefox processes


#include <iostream>

void terminateFirefoxProcesses() {

    const char* command = "pkill firefox";
    int result = system(command);

    if (result == 0) {
        std::cout << "Terminated all Firefox processes.\n";
    } else {
        std::cerr << "Error: Unable to terminate Firefox processes.\n";
    }
}

int main() {
    // Terminate Firefox processes
    terminateFirefoxProcesses();

    return 0;
}

