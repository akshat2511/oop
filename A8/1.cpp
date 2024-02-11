#include <iostream>
 	using namespace std;
 	
 	class Animal
 	{
 	    int lifetime;
 	    string type;
 	
 	public:
 	    Animal()
 	    {
 	        lifetime = 0;
 	        type = "unknown";
 	    }
 	
 	    Animal(int lt, string typ)
 	    {
 	        lifetime = lt;
 	        type = typ;
 	    }
 	
 	    void display()
 	    {
 	        cout << "Lifetime = " << lifetime << " years" << endl;
 	        cout << "type = " << type << endl;
 	    }
 	};
 	
 	class GeographicConditon
 	{
 	public:
 	    string liveson;
 	    GeographicConditon()
 	    {
 	        liveson = "unknown";
 	    }
 	
 	    GeographicConditon(string lon)
 	    {
 	        liveson = lon;
 	    }
 	};
 	
 	class Mammals : public Animal
 	{
 	    int legs;
 	
 	public:
 	    Mammals(int lifetime, string type, int l) : Animal(lifetime, type)
 	    {
 	        legs = l;
 	    }
 	    void breathes()
 	    {
 	        cout << "Breathes through lungs" << endl;
 	    }
 	    void displayMammal()
 	    {
 	        Animal::display();
 	        breathes();
 	        cout << "legs = " << legs << endl;
 	    }
 	};
 	
 	class Reptile : public Animal
 	{
 	    string bloodType;
 	
 	public:
 	    Reptile(int lifetime, string type, string bT) : Animal(lifetime, type)
 	    {
 	        bloodType = bT;
 	    }
 	    void breathes()
 	    {
 	        cout << "Breathes through lungs" << endl;
 	    }
 	    void displayReptile()
 	    {
 	        Animal::display();
 	        breathes();
 	        cout << "BloodType = " << bloodType << endl;
 	    }
 	};
 	
 	class Fish : public Animal, GeographicConditon
 	{
 	    int fins;
 	
 	public:
 	    Fish(int lifetime, string type, int f, string lon) : Animal(lifetime, type), GeographicConditon(lon)
 	    {
 	        fins = f;
 	    }
 	    void breathes()
 	    {
 	        cout << "breathes through gills" << endl;
 	    }
 	
 	    void displayFish()
 	    {
 	        Animal::display();
 	        cout << "Fins = " << fins << endl;
 	        cout << "lives in" << liveson << endl;
 	        breathes();
 	    }
 	};
 	
 	class Dog : public Mammals
 	{
 	    string breed;
 	
 	public:
 	    Dog(int lt, string typ, int l, string br) : Mammals(lt, typ, l)
 	    {
 	        breed = br;
 	    }
 	    void diplayDog()
 	    {
 	        Mammals::displayMammal();
 	        cout << "Breed = " << breed << endl;
 	    }
 	};
 	
 	int main()
 	{
 	    cout << "Single level Mammal class inherits Animal" << endl;
 	    Mammals deer(13, "herbivores", 4); // single level inheritance
 	    deer.displayMammal();
 	    cout << endl;
 	
 	    cout << "Multiple inheritance Fish inherits Animal and Geographic Condition both classes" << endl;
 	    Fish tuna(2, "Omnivores", 4, "water"); // multiple inheritance
 	    tuna.display();
 	    cout << endl;
 	
 	    cout << "Multi level Animal -> Mammals -> Dog class" << endl;
 	    Dog dog1(13, "Omnivore", 4, "labra"); // multi level inheritance
 	    dog1.diplayDog();
 	    cout << endl;
 	    
 	    cout << "Heirarchial level Mammal and Reptile class inherits Animal" << endl;
 	    Reptile chamaeleon(2, "Carnivores", "Cold Blooded"); // single level inheritance
 	    chamaeleon.displayReptile();
 	
 	    return 0;
 	}