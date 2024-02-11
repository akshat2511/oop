#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
    if (a > b)
    {
        cout << "Maximum number is a : " << a << endl;
    }
    else
    {
        cout << "Maximum number is b : " << b << endl;
    }
    return 0;
}