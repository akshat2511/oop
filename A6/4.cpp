#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    Student() {
        rollNo = 0;
        name = "";
        marks = 0.0;
    }

    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    Student(const Student& otherStudent) {
        rollNo = otherStudent.rollNo;
        name = otherStudent.name;
        marks = otherStudent.marks;
    }

    void displayStudentDetails() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student1; 
    Student student2(101, "Alice", 85.5);  
    Student student3 = student2;  

    cout << "Student 1 (Default Constructor):" << endl;
    student1.displayStudentDetails();

    cout << "\nStudent 2 (Overloaded Constructor):" << endl;
    student2.displayStudentDetails();

    cout << "\nStudent 3 (Copy Constructor from Student 2):" << endl;
    student3.displayStudentDetails();

    return 0;
}
