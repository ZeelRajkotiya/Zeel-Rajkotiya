#include <iostream>
using namespace std;

// Define a class for Summation
class Summation {
private:
    int sum;

public:
    // Constructor
    Summation() : sum(0) {}

    // Member function to add numbers
    void add(int num) {
        sum += num;
    }

    // Getter function to retrieve sum
    int getSum() const {
        return sum;
    }
};

// Function to return Summation object by value
Summation sumNumbers(int a, int b) {
    Summation result;
    result.add(a);
    result.add(b);
    return result;
}

int main() {
    int x = 5, y = 10;

    // Call function sumNumbers and receive the result in a Summation object
    Summation result = sumNumbers(x, y);

    // Display the sum of numbers
    cout << "Sum of " << x << " and " << y << " is: " << result.getSum() << endl;

    return 0;
}
