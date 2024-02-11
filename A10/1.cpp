#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show()
    {
        cout << "Base class show() function" << endl;
    }
};

class Derived : public Base
{
public:
    void show() override
    {
        cout << "Derived class show() function" << endl;
    }
};

int main()
{
    Base b;
    Derived d;

    Base *ptr = &b;
    ptr->show(); 

    ptr = &d;
    ptr->show();
    return 0;
}
