#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    std::string city;

    // Input from user
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    // Consume newline left in the buffer after std::cin
    std::cin.ignore();

    std::cout << "Enter your city: ";
    std::getline(std::cin, city);

    // Output bio data
    std::cout << "\nBio Data:\n";
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "City: " << city << std::endl;

    return 0;
}
