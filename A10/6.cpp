#include <iostream>
using namespace std;

class Employee {
public:
    int yearsOfService;

    Employee(int years) : yearsOfService(years) {}

    void checkPromotion() {
        if (yearsOfService > 5) {
             cout << "Employee is promoted." <<  endl;
        } else {
             cout << "Employee is not promoted." <<  endl;
        }
    }
};

int main() {
    Employee emp(6);  // Change the years of service as needed
    emp.checkPromotion();

    return 0;
}
