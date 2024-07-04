#include <iostream>
using namespace std;

class Example {
public:
    void display(int i) {
        cout << "Integer: " << i << endl;
    }
    
    void display(double d) {
        cout << "Double: " << d << endl;
    }
    
    void display(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Example obj;
    obj.display(10);          // Calls display(int)
    obj.display(5.67);        // Calls display(double)
    obj.display("Hello");     // Calls display(string)
    return 0;
}
