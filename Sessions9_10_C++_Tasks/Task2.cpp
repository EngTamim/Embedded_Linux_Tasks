// Task 2
// Create Class to handle logs with different levels and store Msgs as well for dump and clear the buffer
//      LOG::Level(level::warn)<<"forget to close file";
//      LOG::Dump();
//      LOG::Clear


#include <iostream>
#include <sstream>
#include <vector>

class MyLogger {  // You can name the class according to your preference
public:
    enum class LogLevel {
        info,
        warn,
        error
    };

private:
    struct LogMessage {
        LogLevel level;
        std::string message;
    };

    static std::vector<LogMessage> logBuffer;

public:
    class LogProxy {
    private:
        LogLevel level;

    public:
        LogProxy(LogLevel logLevel) : level(logLevel) {}

        // Overloaded stream insertion operator for logging messages
        template <typename T>
        LogProxy& operator<<(const T& message) {
            std::ostringstream oss;
            oss << message;
            logBuffer.push_back({level, oss.str()});
            return *this;
        }
    };

    // LogProxy instance for different log levels
    static LogProxy Info() {
        return LogProxy(LogLevel::info);
    }

    static LogProxy Warn() {
        return LogProxy(LogLevel::warn);
    }

    static LogProxy Error() {
        return LogProxy(LogLevel::error);
    }

    // Function to dump log messages
    static void Dump() {
        for (const auto& entry : logBuffer) {
            std::cout << "[" << LogLevelToString(entry.level) << "] " << entry.message << std::endl;
        }
    }

    // Function to clear log messages
    static void Clear() {
        logBuffer.clear();
    }

private:
    static std::string LogLevelToString(LogLevel level) {
        switch (level) {
            case LogLevel::info:
                return "INFO";
            case LogLevel::warn:
                return "WARN";
            case LogLevel::error:
                return "ERROR";
            default:
                return "UNKNOWN";
        }
    }
};

std::vector<MyLogger::LogMessage> MyLogger::logBuffer;  // Rename the class and the logBuffer variable

int main() {
    MyLogger::Info() << "This is an informational message.";  // Customize the log messages
    MyLogger::Warn() << "This is a warning message.";
    MyLogger::Error() << "This is an error message.";

    MyLogger::Dump();  // You can call these functions based on your logic
    MyLogger::Clear();

    return 0;
}
