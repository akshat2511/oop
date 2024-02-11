#include <iostream>
#include<string>
struct Student {
    int rollNo;
    char name[50];
    double percentage;
};
int main() {
    struct Student s[5];
    
   

    printf("Student's Roll No.: %d\n", s[0].rollNo);
    printf("Student's Name: %s\n", s[0].name);
    printf("Student's Percentage: %.2f\n", s[0].percentage);

    return 0;
}
