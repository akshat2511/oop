#include <iostream>
using namespace std;
int main()
{
    int year, c = 0;
    cout << "Enter the year... ";
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0 || year % 400 != 0)
        {
            cout << "Entered year is a leap year... " << endl;
        }
    }
    else
    {
        cout << "Entered year is not a leap year... " << endl;
    }
    return 0;
}