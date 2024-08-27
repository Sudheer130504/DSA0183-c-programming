#include <iostream>
#include <string>

bool isValidUsername(const std::string& username1, const std::string& username2) {
    return username1 == username2;
}

int main() {
    std::string username1, username2;

    std::cout << "Enter the user name: ";
    std::cin >> username1;

    std::cout << "Reenter the user name: ";
    std::cin >> username2;

    if (isValidUsername(username1, username2)) {
        std::cout << "User name is Valid" << std::endl;
    } else {
        std::cout << "User name is Invalid" << std::endl;
    }

    return 0;
}
