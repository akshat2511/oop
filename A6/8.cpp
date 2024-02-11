#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    string subject;

public:
    Student(int roll, const string& studentName, const string& studentSubject) {
        rollNumber = roll;
        name = studentName;
        subject = studentSubject;
    }

    void Display() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    int rollNo;
    string studentName, studentSubject;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Name: ";
    
    getline(cin, studentName);

    cout << "Enter Subject: ";
    getline(cin, studentSubject);

    Student student(rollNo, studentName, studentSubject);

    student.Display();

    return 0;
}
