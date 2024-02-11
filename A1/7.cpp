#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
    cout << "Value of a is : " << a << endl;
    cout << "Value of b is : " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "Using temp variable..." << endl;
    cout << "New value of a is : " << a << endl;
    cout << "New value of b is : " << b << endl;
    cout << "\n";
    int c, d;
    cout << "Enter the value of c : ";
    cin >> c;
    cout << "Enter the value of d : ";
    cin >> d;
    cout << "Value of c is : " << c << endl;
    cout << "Value of d is : " << d << endl;
    c = c + d;
    d = c - d;
    c = c - d;
    cout << "Without using temp variable..." << endl;
    cout << "New value of c is : " << c << endl;
    cout << "New value of d is : " << d << endl;
    return 0;
}