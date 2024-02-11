#include <iostream>
using namespace std;
int main()
{
    int n, p, r;
    float i;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of p : ";
    cin >> p;
    cout << "Enter the value of r : ";
    cin >> r;
    i = (n * p * r) / 100;
    cout << "Simple interest is : " << i << endl;
    return 0;
}
