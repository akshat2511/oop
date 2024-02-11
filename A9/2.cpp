
#include <iostream>
using namespace std;

int main() {
    int A = 5; 
    int* pointA = &A; 

    cout << "A = " << A << endl;
    cout << "*pointA = " << *pointA << endl;

    
    A = 7;

    cout << "Changing value of A to 7:" << endl;
    cout << "A = " << A << endl;
    cout << "*pointA = " << *pointA << endl;

    *pointA = 16;

    cout << "Changing value of *pointA to 16:" << endl;
    cout << "A = " << A << endl;
    cout << "*pointA = " << *pointA << endl;

    return 0;
}