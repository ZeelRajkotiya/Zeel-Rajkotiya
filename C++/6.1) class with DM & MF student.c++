#include <iostream>
#include <string>
using namespace std;

// Define a class for Student
class Student {
private:
    int rollNumber;
    string name;
    int age;
    string course;

public:
    // Member function to set student details
    void setDetails(int r, string n, int a, string c) {
        rollNumber = r;
        name = n;
        age = a;
        course = c;
    }

    // Member function to display student details
    void display() {
        cout << "Student Information:" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    // Create an object of Student class
    Student student1;

    // Set details for student1
    student1.setDetails(1001, "John Doe", 20, "Computer Science");

    // Display details of student1
    student1.display();

    return 0;
}
