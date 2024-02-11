#include <iostream>
using namespace std;
double calculateElectricityCharges(double unitsConsumed)
{

    double first100UnitsRate = 0.60;
    double next200UnitsRate = 0.80;
    double beyond300UnitsRate = 0.90;
    double minimumCharge = 50.00;
    double surchargeRate = 0.15;
    double charge;
    if (unitsConsumed <= 100)
    {
        charge = unitsConsumed * first100UnitsRate;
    }
    else if (unitsConsumed <= 300)
    {
        charge = 100 * first100UnitsRate + (unitsConsumed - 100) * next200UnitsRate;
    }
    else
    {
        charge = 100 * first100UnitsRate + 200 * next200UnitsRate + (unitsConsumed - 300) * beyond300UnitsRate;
    }
    charge = max(charge, minimumCharge);
    if (charge > 300.00)
    {
        double surcharge = charge * surchargeRate;
        charge += surcharge;
    }
    return charge;
}

int main()
{
    string userName;
    double unitsConsumed;

    cout << "Enter your name: ";
    cin >> userName;
    cout << "Enter the number of units consumed: ";
    cin >> unitsConsumed;
    double charges = calculateElectricityCharges(unitsConsumed);
    cout << "Electricity charges for " << userName << ": Rs. " << charges << endl;
    return 0;
}
