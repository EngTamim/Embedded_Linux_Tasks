// Task1:
// Create task to log the uptime every monday on 1:00 pm

#include <iostream>
#include <fstream>
#include <ctime>

int main() {
    // Get the current time
    std::time_t currentTime = std::time(nullptr);
    std::tm* localTime = std::localtime(&currentTime);

    // Check if today is Monday (tm_wday: 0=Sunday, 1=Monday, ..., 6=Saturday)
    if (localTime->tm_wday == 1) {
        // Open the log file for appending
        std::ofstream logFile("../uptime_log.txt", std::ios::app);

        if (!logFile.is_open()) {
            std::cerr << "Error: Unable to open log file for writing.\n";
            return 1;
        }

        // Log the current date and uptime
        logFile << "Date: " << (localTime->tm_mon + 1) << "/"
                << localTime->tm_mday << "/" << (localTime->tm_year + 1900)
                << " | Uptime: ";

        // Run the uptime command and append the result to the log file
        FILE* uptimeCommand = popen("uptime", "r");
        if (uptimeCommand) {
            char buffer[256];
            while (fgets(buffer, sizeof(buffer), uptimeCommand) != nullptr) {
                logFile << buffer;
            }

            pclose(uptimeCommand);
        } else {
            std::cerr << "Error: Unable to execute uptime command.\n";
        }

        logFile << "\n\n";

        // Close the log file
        logFile.close();
        std::cout << "Uptime logged successfully.\n";
    } else {
        std::cout << "Not Monday. No logging performed.\n";
    }

    return 0;
}

