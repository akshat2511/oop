#include <iostream>
using namespace std;
class Count 
{
   private:
    int value;
   public:
    Count()
    {
    	value = 5;
	}
    Count(int x)
    {
    	value = x;
	}
    void operator ++ (int)
	{
        value=value+1000;
    } 
    void operator -- (int)
	{
        value=value+10;
    } 
	void display() 
	{
        cout << "Count: " << value << endl;
    }
};
int main() 
{
    Count count1;
    count1++;
    count1.display();
    return 0;
}
