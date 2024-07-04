#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("datafile.txt");
    
    if (file.is_open()) {
        file << "Hello, World!" << std::endl;
        file << "This is a new file." << std::endl;
        std::cout << "Data written to the file successfully." << std::endl;
        file.close();
    } else {
        std::cerr << "Failed to open the file for writing." << std::endl;
    }
    
    return 0;
}
