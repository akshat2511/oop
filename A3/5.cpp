#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    int rollNo;
    string name;
    double percentage;

      void Student_input(int r,string n, double p) {
        rollNo = r;
        name = n;
        percentage = p;
    }
};

int main() {
    Student s[5];
    s[0].Student_input(101, "akshat sahu", 90.4);
    cout << "Student's Roll No.: " << s[0].rollNo <<endl;
    cout << "Student's Name: " << s[0].name <<endl;
    cout << "Student's Percentage: " << s[0].percentage <<endl;

    return 0;
}
