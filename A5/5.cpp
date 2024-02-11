#include <iostream>
using namespace std;

string returnValue() {
    return "aaa";
}
string returnValue(int) {
    return "bbb";
}
string returnValue(int,int) {
    return "ccc";
}

int main() {
    cout << "No argument passed: " << returnValue() << endl;
    cout << "First argument passed: " << returnValue(1) << endl;
    cout << "Both arguments passed: " << returnValue(1,1) << endl;
    
    return 0;
}
