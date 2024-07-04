#include <iostream>
#include <string>
using namespace std;

// Define a class for Employee
class Employee {
private:
    int empId;
    string name;
    double salary;

public:
    // Constructor
    Employee(int id, string n, double s) : empId(id), name(n), salary(s) {}

    // Member function to display employee details
    void display() const {
        cout << "Employee Information:" << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }

    // Function to return an Employee object by value
    static Employee createEmployee(int id, string n, double s) {
        return Employee(id, n, s);
    }
};

int main() {
    // Create an Employee object using static function createEmployee
    Employee emp = Employee::createEmployee(101, "John Doe", 60000.0);

    // Display details of the created employee object
    emp.display();

    return 0;
}
