#include <iostream>
using namespace std;
#define p 3.14
int main()
{
    int rad;
    float area;
    cout << "Enter the radius of circle : ";
    cin >> rad;
    area = p * rad * rad;
    cout << "Area of the circle is : " << area << endl;
    return 0;
}
