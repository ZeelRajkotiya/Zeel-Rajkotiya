#include <iostream>
#include <string>
using namespace std;

// Define a structure for Employee
struct Employee {
    int empId;
    string name;
    int age;
    double salary;
};

int main() {
    // Declare an Employee object
    Employee emp1;

    // Assign values to the members of emp1
    emp1.empId = 101;
    emp1.name = "Jane Smith";
    emp1.age = 30;
    emp1.salary = 50000.0;

    // Display information about emp1
    cout << "Employee Information:" << endl;
    cout << "Employee ID: " << emp1.empId << endl;
    cout << "Name: " << emp1.name << endl;
    cout << "Age: " << emp1.age << endl;
    cout << "Salary: $" << emp1.salary << endl;

    return 0;
}
