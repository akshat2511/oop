#include <iostream>
using namespace std;
int main()
{
    cout << "enter the number of elements you want to enter";
    int n;
    cin >> n;
    int *arr;
    arr = new int[n];
     int max = INT16_MIN;
     int min = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = *(arr + i);
        }
        if (min > arr[i])
        {
            min = *(arr + i);
        }
    }
    cout << "max number" << max << endl;
    cout << "min number" << min << endl;
}