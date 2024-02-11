#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
};

void calculateAverageAge(Student s1, Student s2) {
    double avgAge = (s1.age + s2.age) / 2.0;
    cout << "Average Age: " << avgAge << endl;
}

int main() {
    Student student1, student2;
    
    cout << "Enter the name and age of student 1:" << endl;
    cin >> student1.name >> student1.age;
    
    cout << "Enter the name and age of student 2:" << endl;
    cin >> student2.name >> student2.age;
    
    calculateAverageAge(student1, student2);
    
    return 0;
}
