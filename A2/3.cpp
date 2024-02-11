#include <iostream>
using namespace std;
int main()
{
    int n, m, ans = 1;
    cout << "Enter the number... ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        ans *= n;
        n--;
    }
    cout << "Factorial of " << m << " is " << ans << endl;
    return 0;
}