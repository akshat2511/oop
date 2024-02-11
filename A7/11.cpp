#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> newNumbers = {10, 20, 30};

    
    numbers.assign(4, 7); 


    numbers.push_back(6);


    numbers.pop_back();

    auto it = numbers.begin() + 2;
    numbers.insert(it, 8); 
    it = numbers.begin() + 3;
    numbers.erase(it); 


    numbers.swap(newNumbers);

    newNumbers.clear();

    cout << "numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << "newNumbers: ";
    for (int num : newNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
