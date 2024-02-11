#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "Size: " << numbers.size() << endl;
    cout << "Max Size: " << numbers.max_size() << endl;
    cout << "Capacity: " << numbers.capacity() << endl;

    numbers.resize(7);
    cout << "Resized Size: " << numbers.size() << endl;

    if (numbers.empty()) {
        cout << "Vector is empty." << endl;
    } else {
        cout << "Vector is not empty." << endl;
    }

    
    numbers.shrink_to_fit();
    cout << "After shrinking to fit, Capacity: " << numbers.capacity() << endl;
    numbers.reserve(10);
    cout << "After reserving space, Capacity: " << numbers.capacity() << endl;

    return 0;
}
