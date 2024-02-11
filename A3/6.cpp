#include <iostream>
#include <string>
using namespace std;
class time
{
public:
    int hour;
    int min;
    int sec;

    void convert(int time)
    {
       sec=time%60;
       hour=time/3600;
       time=time%3600;
       min=time/60;


    }
};

int main()
{
    time t1;
    int x;
    cin>>x;
    t1.convert(x);
    cout << t1.hour<<":"<<t1.min<<":"<<t1.sec<< endl;

    return 0;
}
