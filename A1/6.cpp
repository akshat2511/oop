#include <iostream>
using namespace std;
int main()
{
    int l, b, area, perimeter;
    cout << "Enter the value of l : " << endl;
    cin >> l;
    cout << "Enter the value of b : " << endl;
    cin >> b;
    perimeter = 2 * (l + b);
    area = l * b;
    cout << "Perimeter of rectangle is : " << perimeter << endl;
    cout << "Area of rectangle is : " << area << endl;
    return 0;
}