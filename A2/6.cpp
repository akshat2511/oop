#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the number a : ";
    cin >> a;
    cout << "Enter the number b : ";
    cin >> b;
    cout << "Enter the number c : ";
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "Number a = " << a << " is largest among three" << endl;
        }
        else
        {
            cout << "Number c = " << c << " is largest among three" << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "Number b = " << b << " is largest among three" << endl;
        }
        else
        {
            cout << "Number c = " << c << " is largest among three" << endl;
        }
    }
    return 0;
}