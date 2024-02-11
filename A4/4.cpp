#include<iostream>
using namespace std;
void swapbyvalue(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;

}
void swapbyvariable(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;

}
void swapbyaddress(int *a,int *b){
    int *temp;
    *temp=*a;
    *a=*b;
    *b=*temp;
}
int main(){
    int a=10;
    int b=15;
    swapbyaddress(&a,&b);
    cout<<a<<" "<<b;


}