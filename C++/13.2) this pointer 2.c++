#include <iostream>
using namespace std;

class Example {
private:
    int value;
public:
    // Constructor to initialize value
    Example(int value) {
        // Using 'this' pointer to distinguish between member variable and parameter
        this->value = value;
    }

    // Member function to set the value
    void setValue(int value) {
        this->value = value;
    }

    // Member function to display the value
    void display() const {
        cout << "Value: " << this->value << endl;
    }
};

int main() {
    Example obj(10);
    obj.display();

    obj.setValue(20);
    obj.display();
    return 0;
}
