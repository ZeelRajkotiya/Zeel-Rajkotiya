#include <iostream>
#include <string>
using namespace std;

// Define a class for Employee
class Employee {
private:
    int empId;
    string name;
    int age;
    double salary;

public:
    // Member function to set employee details
    void setDetails(int id, string n, int a, double s) {
        empId = id;
        name = n;
        age = a;
        salary = s;
    }

    // Member function to display employee details
    void display() {
        cout << "Employee Information:" << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    // Create an object of Employee class
    Employee emp1;

    // Set details for emp1
    emp1.setDetails(101, "Jane Smith", 30, 50000.0);

    // Display details of emp1
    emp1.display();

    return 0;
}
