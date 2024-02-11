#include <iostream>
using namespace std;
int main()
{
    int n, ans = 0;
    cout << "Enter the number : ";
    cin >> n;
    cout << "You entered a number and got this : ";
    for (int i = 1; i <= n; i++)
    {
        ans = ans + i;
        cout << i << " ";
    }
    cout << "\nSum is : " << ans << endl;
    return 0;
}