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
    static int count; // Static member to count number of students

public:
    // Constructor
    Student(int r, string n, int a, string c) : rollNumber(r), name(n), age(a), course(c) {
        count++; // Increment count for each new student object
    }

    // Static member function to get total number of students
    static int getCount() {
        return count;
    }

    // Member function to display student details
    void display() const {
        cout << "Student Information:" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

// Initialize static member count
int Student::count = 0;

int main() {
    const int numStudents = 3;
    // Array of Student objects
    Student students[numStudents] = {
        Student(1001, "John Doe", 20, "Computer Science"),
        Student(1002, "Jane Smith", 21, "Electrical Engineering"),
        Student(1003, "David Brown", 22, "Mechanical Engineering")
    };

    // Display details of each student
    for (int i = 0; i < numStudents; ++i) {
        students[i].display();
        cout << endl;
    }

    // Display total number of students using static member function
    cout << "Total number of students: " << Student::getCount() << endl;

    return 0;
}
