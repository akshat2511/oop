#include <iostream>
 	using namespace std;
 	class AddData
 	{
 	protected:
 	    int N1;
 	    int N2;
 	
 	public:
 	    AddData(int N1, int N2)
 	    {
 	        this->N1 = N1;
 	        this->N2 = N2;
 	    }
 	};
 	
 	class Addition : public AddData
 	{
 	public:
 	    Addition(int N1, int N2) : AddData(N1, N2) {}
 	    int add()
 	    {
 	        return N1 + N2;
 	    }
 	};
 	
 	int main()
 	{
 	    Addition addition(10, 20);
 	    int sum = addition.add();
 	    cout << "The sum of 10 and 20 is " << sum << endl;
 	    return 0;
 	}