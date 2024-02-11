#include <iostream>
using namespace std;
int main()
{
    int n, ans = 0;
    cout << "Enter the limit of Fibonacci Series : ";
    cin >> n;
    int first = 0, second = 1, next;
    for (int i = 0; i < n; i++)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}