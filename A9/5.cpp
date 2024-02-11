#include <iostream>
using namespace std;

bool searchElement(int* arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (*arr == target) {
            return true;
        }
        arr++;
    }
    return false;
}

int main() {
    int arr[] = {1, 13, 5, 17, 12, 11, 13};
    int target;

    cout << "Enter the element you want to search: ";
    cin >> target;

    bool found = searchElement(arr, sizeof(arr)/sizeof(arr[0]), target);

    if (found) {
        cout << target << " is found in the array." << endl;
    } else {
        cout << target << " is not found in the array." << endl;
    }

    return 0;
}