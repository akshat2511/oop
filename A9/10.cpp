#include <iostream>
using namespace std;

int main() {
    int numList[] = {11, 12, 13, 14, 15};
    int* ptr = numList; 
    int sum = 0;

    
    for (int i = 0; i < 5; i++) {
        sum += *ptr;
        ptr++;
    }

    cout << "Sum of the list: " << sum << endl;

    return 0;
}