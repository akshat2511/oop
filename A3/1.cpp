#include <iostream>
using namespace std;
class members
{
public:
    int n;
};
int main(){
    members num;
    num.n = 45;
    cout << "Value of num: " << num.n << endl;
}
