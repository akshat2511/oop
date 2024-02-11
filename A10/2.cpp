#include <iostream>
using namespace std;
class LIST
{
public:
    virtual void store() = 0;
    virtual void retrieve() = 0;
};

class stack : public LIST
{
public:
    void store() override
    {
        cout << "Stack: Storing data" << endl;
    }

    void retrieve() override
    {
        cout << "Stack: Retrieving data" << endl;
    }
};

class queue : public LIST
{
public:
    void store() override
    {
        cout << "Queue: Storing data" << endl;
    }

    void retrieve() override
    {
        cout << "Queue: Retrieving data" << endl;
    }
};

int main()
{
    stack s;
    queue q;

    s.store();
    s.retrieve();

    q.store();
    q.retrieve();

    return 0;
}

    v_S_ID,
   v_Student_Name,
   v_Father_Name,
   v_Mother_Name,
   v_Age,
   v_Contact_Number,
   v_Email_Address,
   v_Aadhar_Number,