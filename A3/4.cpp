#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    int rollNo;
    string name;
    double percentage;

      Student(int r,string n, double p) {
        rollNo = r;
        name = n;
        percentage = p;
    }
};

int main() {
    Student student1(101, "akshat sahu", 90.4);
    cout << "Student's Roll No.: " << student1.rollNo <<endl;
    cout << "Student's Name: " << student1.name <<endl;
    cout << "Student's Percentage: " << student1.percentage <<endl;

    return 0;
}
