#include <iostream>
using namespace std;
class vehicle
{
public:
    int price;
    int quantity;
};
int main(){
   vehicle bike, car;
   cout<<"enter price and available quantity of bike:";
    cin>>bike.price>>bike.quantity;
    cout<<"enter price and available quantity of car:";
    cin>>car.price>>car.quantity;
    cout <<"Price of bike is " <<bike.price <<endl;
    cout <<"Price of car is " <<car.price <<endl;
    cout <<"Number of bike available in showroom " <<bike.quantity <<endl;
    cout <<"Number of Car available in showroom " <<car.quantity <<endl;
}
