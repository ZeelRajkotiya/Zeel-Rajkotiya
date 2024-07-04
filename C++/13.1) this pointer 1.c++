#include <iostream>
using namespace std;

class Example {
private:
    int value;
public:
    // Constructor to initialize value
    Example(int val) : value(val) {}

    // Member function to set the value and return the current object
    Example& setValue(int val) {
        this->value = val;
        return *this;
    }

    // Member function to display the value
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Example obj(10);
    obj.display();

    // Using method chaining with 'this' pointer
    obj.setValue(20).display();
    return 0;
}
