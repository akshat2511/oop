#include <iostream>
 	using namespace std;
 	class Animal
 	{
 	public:
 	    virtual void eat()
 	    {
 	        cout << "Animal is eating." << endl;
 	    }
 	};
 	class Mammals : public Animal
 	{
 	public:
 	    void eat()
 	    {
 	        cout << "Mammals are eating." << endl;
 	    }
 	};
 	class Herbivores : public Animal
 	{
 	public:
 	    void eat()
 	    {
 	        cout << "Herbivores are eating." << endl;
 	    }
 	};
 	class Cow : public Mammals, public Herbivores
 	{
 	public:
 	    void eat()
 	    {
 	        cout << "Cow is eating grass." << endl;
 	    }
 	};
 	int main()
 	{
 	    Cow jersey;
 	    jersey.eat();
 	    return 0;
 	}