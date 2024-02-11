#include <iostream>
using namespace std;

int main() {
    int num = 5; 
    int arr[] = {11, 12, 13,14}; 

    int* ptrToInt = &num;
    int* ptrToArray = arr; 

    cout << "Value pointed by ptrToInt: " << *ptrToInt << endl;

    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        cout << "Value at index " << i << " of arr: " << *(ptrToArray + i) << endl;
    }

    return 0;
}