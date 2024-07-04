#include <iostream>
#include <string>
using namespace std;

// Define a structure for Student
struct Student {
    int rollNumber;
    string name;
    int age;
    string course;
};

int main() {
    // Declare a Student object
    Student student1;

    // Assign values to the members of student1
    student1.rollNumber = 1001;
    student1.name = "John Doe";
    student1.age = 20;
    student1.course = "Computer Science";

    // Display information about student1
    cout << "Student Information:" << endl;
    cout << "Roll Number: " << student1.rollNumber << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Course: " << student1.course << endl;

    return 0;
}
