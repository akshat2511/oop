#include<iostream>
using namespace std;

class Numbers {
private:
    int x, y, z;
public:
    Numbers(int a, int b, int c) : x(a), y(b), z(c) {}

    Numbers operator-() {
        return Numbers(-x, -y, -z);
    }

    void display() {
        cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    }
};

int main() {
    Numbers num(5, 7, 9);
    Numbers negNum = -num;

    num.display();    
    negNum.display();

    return 0;
}
