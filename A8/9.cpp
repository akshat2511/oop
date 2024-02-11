#include <iostream>
 	using namespace std;
 	class Vehicle
 	{
 	public:
 	    virtual void move()
 	    {
 	        cout << "Vehicle is moving." << endl;
 	    }
 	};
 	
 	class Twowheeler : public Vehicle
 	{
 	public:
 	    void move()
 	    {
 	        cout << "Twowheeler is moving." << endl;
 	    }
 	};
 	
 	class Fourwheeler : public Vehicle
 	{
 	public:
 	    void move()
 	    {
 	        cout << "Fourwheeler is moving." << endl;
 	    }
 	};
 	
 	class Car : public Fourwheeler
 	{
 	public:
 	    void move()
 	    {
 	        cout << "Car is moving." << endl;
 	    }
 	};
 	class Scooter : public Twowheeler
 	{
 	public:
 	    void move()
 	    {
 	        cout << "Scooter is moving." << endl;
 	    }
 	};
 	int main()
 	{
 	    Car nano;
 	    Scooter activa;
 	    nano.move();
 	    activa.move();
 	    return 0;
 	}