#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("datafile.txt", std::ios::app);
    
    if (file.is_open()) {
        file << "Appending new data." << std::endl;
        file << "This line is added to the existing file." << std::endl;
        std::cout << "Data appended to the file successfully." << std::endl;
        file.close();
    } else {
        std::cerr << "Failed to open the file for appending." << std::endl;
    }
    
    return 0;
}
