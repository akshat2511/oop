#include <iostream>

using namespace std; 

class Alpha {
public:
    Alpha() {
        cout << "Alpha constructor called" << endl;
    }
};

class Beta {
public:
    Beta() {
        cout << "Beta constructor called" << endl;
    }
};

class Gamma : public Alpha, public Beta {
public:
    Gamma() {
        cout << "Gamma constructor called" << endl;
    }
};

int main() {
    Gamma gamma; 

    return 0;
}
