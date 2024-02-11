#include <iostream>

using namespace std;

class Student {
protected:
    int rollNo;

public:
    Student(int roll) : rollNo(roll) {}
    void displayStudentInfo() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Test : public Student {
protected:
    int sportsScore;

public:
    Test(int roll, int score) : Student(roll), sportsScore(score) {}

    void displaySportsScore() {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

class Result : public Test {
public:
    Result(int roll, int score) : Test(roll, score) {}

    void displayResult() {
        int totalScore = sportsScore; 
        cout << "Total Score: " << totalScore << endl;
        cout << "Result: ";
        if (totalScore >= 50) {
            cout << "Pass" << endl;
        } else {
            cout << "Fail" << endl;
        }
    }
};

int main() {
    Result studentResult(101, 65);

    studentResult.displayStudentInfo();
    studentResult.displaySportsScore();
    studentResult.displayResult();

    return 0;
}
