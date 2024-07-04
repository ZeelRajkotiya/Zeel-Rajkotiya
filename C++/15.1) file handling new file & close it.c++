#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("newfile.txt");
    
    if (file.is_open()) {
        std::cout << "File created and opened successfully." << std::endl;
        file.close();
        std::cout << "File closed successfully." << std::endl;
    } else {
        std::cerr << "Failed to create or open the file." << std::endl;
    }
    
    return 0;
}
