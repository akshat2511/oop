#include <iostream>
using namespace std;
int main()
{
    int num, c = 0;
    cout << "Enter the number... ";
    cin >> num;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            c++;
        }
    }
    if (c == 0)
    {
        cout << "Entered number is Prime number" << endl;
    }
    else
    {
        cout << "Entered number is not Prime number" << endl;
    }
    return 0;
}