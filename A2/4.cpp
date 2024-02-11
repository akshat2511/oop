#include <iostream>
using namespace std;
int main()
{
    int i = 0, a, b, r, count = 0;
    cout << "Enter the number : ";
    cin >> a;
    b = a;
    for (i = a; a != 0; a = a / 10)
    {
        r = a % 10;
        count = count + r * r * r;
    }
    cout << "Answer is : " << count << endl;
    if (count == b)
    {
        cout << "Number " << b << " is armstrong number" << endl;
    }
    else
    {
        cout << "Number " << b << " is not armstrong number" << endl;
    }
    return 0;
}
