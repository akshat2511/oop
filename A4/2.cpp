#include <iostream>
using namespace std;
int main()
{
    cout << "enter the number of elements you want to enter";
    int n;
    cin >> n;
    int *arr;
    arr = new int[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum=sum+arr[i];
    }
   cout << sum;
}