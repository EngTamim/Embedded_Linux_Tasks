// Task1:
// Using vim to write c++ code to schedule task in linux to run every monday at 01:23 clock

#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <task>\n";
        return 1;
    }

    // Open crontab file for writing
    std::ofstream crontabFile("/tmp/my_crontab");
    if (!crontabFile.is_open()) {
        std::cerr << "Error: Unable to open crontab file for writing.\n";
        return 1;
    }

    // Create a crontab entry to run the task every Monday at 01:23
    crontabFile << "23 1 * * 1 " << argv[1] << std::endl;

    // Close the crontab file
    crontabFile.close();

    // Install the new crontab file
    system("crontab /tmp/my_crontab");

    std::cout << "Task scheduled successfully.\n";

    return 0;
}

