// Address Book Project 
// Develop a simple address book program that allows users to list,add,delete,search and close for contacts

#include <iostream>
#include <vector>
#include <algorithm>

struct User {
    std::string name;
    std::string phoneNumber;
};

void listUsers(const std::vector<User>& users) {
    std::cout << "Users in the address book:" << std::endl;
    for (const User& user : users) {
        std::cout << "Name: " << user.name << ", Phone Number: " << user.phoneNumber << std::endl;
    }
}

void addUser(std::vector<User>& users) {
    User newUser;
    std::cout << "Enter name: ";
    std::cin >> newUser.name;
    std::cout << "Enter phone number: ";
    std::cin >> newUser.phoneNumber;
    users.push_back(newUser);
    std::cout << "User added successfully!" << std::endl;
}

void deleteUser(std::vector<User>& users) {
    std::string name;
    std::cout << "Enter name of user to delete: ";
    std::cin >> name;
    auto it = std::remove_if(users.begin(), users.end(), [&name](const User& user) {
        return user.name == name;
    });
    users.erase(it, users.end());
    std::cout << "User(s) deleted successfully!" << std::endl;
}

void deleteAllUsers(std::vector<User>& users) {
    users.clear();
    std::cout << "All users deleted successfully!" << std::endl;
}

void searchUser(const std::vector<User>& users) {
    std::string name;
    std::cout << "Enter name to search: ";
    std::cin >> name;
    auto it = std::find_if(users.begin(), users.end(), [&name](const User& user) {
        return user.name == name;
    });
    if (it != users.end()) {
        std::cout << "User found - Name: " << it->name << ", Phone Number: " << it->phoneNumber << std::endl;
    } else {
        std::cout << "User not found." << std::endl;
    }
}

int main() {
    std::vector<User> users;

    int choice;
    do {
        std::cout << "Address Book Menu:" << std::endl;
        std::cout << "1: List all users" << std::endl;
        std::cout << "2: Add a user" << std::endl;
        std::cout << "3: Delete a user" << std::endl;
        std::cout << "4: Delete all users" << std::endl;
        std::cout << "5: Search for a user" << std::endl;
        std::cout << "6: Close the address book" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                listUsers(users);
                break;
            case 2:
                addUser(users);
                break;
            case 3:
                deleteUser(users);
                break;
            case 4:
                deleteAllUsers(users);
                break;
            case 5:
                searchUser(users);
                break;
            case 6:
                std::cout << "Closing the address book. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 6);

    return 0;
}
