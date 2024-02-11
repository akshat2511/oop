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

    Student(int r, string n) {
        rollNo = r;
        name = n;
        marks = 0.0;
    }

    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    void displayStudentDetails() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    
    Student student1;  
    Student student2(101, "Alice");  
    Student student3(102, "Bob", 85.5);  

    cout << "Student 1 (Default Constructor):" << endl;
    student1.displayStudentDetails();

    cout << "\nStudent 2 (Parameterized Constructor with Roll Number and Name):" << endl;
    student2.displayStudentDetails();

    cout << "\nStudent 3 (Parameterized Constructor with Roll Number, Name, and Marks):" << endl;
    student3.displayStudentDetails();

    return 0;
}
