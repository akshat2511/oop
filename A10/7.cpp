#include <iostream>
using namespace std;
#include<vector>

// void circularRightShift(int arr[], int size, int shift)
// {
//     // Ensure shift is non-negative
//     shift = (shift % size + size) % size;

//     if (shift == 0)
//     {
//         return; // No shift needed
//     }

//     int *temp = new int[shift];

//     // Copy the last 'shift' elements to temporary array
//     for (int i = 0; i < shift; i++)
//     {
//         temp[i] = arr[size - shift + i];
//     }

//     // Right-shift the remaining elements
//     for (int i = size - 1; i >= shift; i--)
//     {
//         arr[i] = arr[i - shift];
//     }

//     // Copy the temporary array back to the start
//     for (int i = 0; i < shift; i++)
//     {
//         arr[i] = temp[i];
//     }

//     delete[] temp;
// }

int shiftAndGetElement(int arr[], int k, int i,int h) {
    int n = h;
    
    // Calculate the effective number of shifts by taking k modulo the array length
    int effectiveShifts = k % n;
    
    // Create a new vector to hold the shifted array
    vector<int> shiftedArray(n);
    for (int j = 0; j < n; j++) {
        shiftedArray[(j + effectiveShifts) % n] = arr[j];
    }
    
    // Return the i-th element of the shifted array
    return shiftedArray[i];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        b:
        int n;
        int k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int counter = k;
        while (counter > 0)
        {
            for (int i = 0; i < n; i++)
            {
                
                if (shiftAndGetElement(a,i+1,0,5) == i + 1)
                {
                    counter--;
                    break;
                }
                if(i==n-1){
                    cout<<"NO"<<endl;
                    t--;
                    goto b;
                }

            }

        }
        cout<<"YES"<<endl;
    }
}
