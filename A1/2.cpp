#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number... ";
    cin >> num;
    cout << "You entered a number " << num << endl;
    float num2;
    cout << "Enter the number... ";
    cin >> num2;
    cout << "You entered a number " << num2 << endl;
    int num3;
    cout << "Enter the number... ";
    cin >> num3;
    cout << num3 << "*" << num3 << endl;
    float a;
    cout << "Enter the number... ";
    cin >> a;
    cout << "Your number is : " << fixed << setprecision(2) << a;
    char name[15];
    cout << "Enter your name : " << endl;
    gets(name);
    cout << "Your name is : " << name << endl;
    char collegename[100];
    cout << "Enter your college name : " << endl;
    gets(collegename);
    cout << "Your college name is : " << collegename << endl;
    return 0;
}
