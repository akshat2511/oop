#include <iostream>
using namespace std;

class Time {
public:
    Time() {
        cout << "This is the time constructor." << endl;
    }

    ~Time() {
        cout << "This is the time destructor." << endl;
    }
};

int main() {
    cout << "Inside the main function" << endl;
    Time t1; 
    {
        cout << "Entering into the block" << endl;
        Time t2;
        Time t3; 
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main()" << endl;
    
    return 0;
}
