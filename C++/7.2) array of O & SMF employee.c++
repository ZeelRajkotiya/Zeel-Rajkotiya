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
    static int count; // Static member to count number of employees

public:
    // Constructor
    Employee(int id, string n, int a, double s) : empId(id), name(n), age(a), salary(s) {
        count++; // Increment count for each new employee object
    }

    // Static member function to get total number of employees
    static int getCount() {
        return count;
    }

    // Member function to display employee details
    void display() const {
        cout << "Employee Information:" << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: $" << salary << endl;
    }
};

// Initialize static member count
int Employee::count = 0;

int main() {
    const int numEmployees = 2;
    // Array of Employee objects
    Employee employees[numEmployees] = {
        Employee(101, "John Doe", 30, 60000.0),
        Employee(102, "Jane Smith", 35, 75000.0)
    };

    // Display details of each employee
    for (int i = 0; i < numEmployees; ++i) {
        employees[i].display();
        cout << endl;
    }

    // Display total number of employees using static member function
    cout << "Total number of employees: " << Employee::getCount() << endl;

    return 0;
}
