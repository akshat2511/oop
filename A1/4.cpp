#include <iostream>
using namespace std;
int main()
{
    float F, C;
    cout << "Enter the temprature in Fahrenheit : ";
    cin >> F;
    C = ((F - 32) * 5) / 9;
    cout << "Temprature in Celsius is : " << C << endl;
    return 0;
}