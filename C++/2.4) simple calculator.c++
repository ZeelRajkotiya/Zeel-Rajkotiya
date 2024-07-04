#include <iostream>

int main() {
    char op;
    double num1, num2, result;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
                return 1; // Exit with error
            }
            break;
        default:
            std::cout << "Error: Invalid operator!" << std::endl;
            return 1; // Exit with error
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
