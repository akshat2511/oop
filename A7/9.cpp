#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Element at index 2: " << numbers.at(2) << endl;
    cout << "Front element: " << numbers.front() << endl;
    cout << "Back element: " << numbers.back() << endl;
    cout << "Data pointer: " << numbers.data() << endl;

    return 0;
}
