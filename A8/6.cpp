#include <iostream>
 	#include <vector>
 	using namespace std;
 	class Person
 	{
 	public:
 	    string name;
 	    string address;
 	    string phone_no;
 	    void acceptDetails()
 	    {
 	        cout << "Enter Name: ";
 	        cin.ignore();
 	        getline(cin, name);
 	        cout << "Enter Address: ";
 	        getline(cin, address);
 	        cout << "Enter Phone Number: ";
 	        cin >> phone_no;
 	    }
 	    void displayDetails()
 	    {
 	        cout << "Name: " << name << endl;
 	        cout << "Address: " << address << endl;
 	        cout << "Phone Number: " << phone_no << endl;
 	    }
 	};
 	
 	class Employee : public Person
 	{
 	public:
 	    int eno;
 	    string ename;
 	    void acceptDetails()
 	    {
 	        Person::acceptDetails();
 	        cout << "Enter Employee Number: ";
 	        cin >> eno;
 	        cout << "Enter Employee Name: ";
 	        cin.ignore();
 	        getline(std::cin, ename);
 	    }
 	    void displayDetails()
 	    {
 	        Person::displayDetails();
 	        cout << "Employee Number: " << eno << endl;
 	        cout << "Employee Name: " << ename << endl;
 	    }
 	};
 	
 	class Manager : public Employee
 	{
 	public:
 	    string designation;
 	    string department_name;
 	    double basic_salary;
 	    void acceptDetails()
 	    {
 	        Employee::acceptDetails();
 	        cout << "Enter Designation: ";
 	        cin.ignore();
 	        getline(std::cin, designation);
 	        cout << "Enter Department Name: ";
 	        getline(std::cin, department_name);
 	        cout << "Enter Basic Salary: ";
 	        cin >> basic_salary;
 	    }
 	    void displayDetails()
 	    {
 	        Employee::displayDetails();
 	        cout << "Designation: " << designation << endl;
 	        cout << "Department Name: " << department_name << endl;
 	        cout << "Basic Salary: $" << basic_salary << endl;
 	    }
 	};
 	int main()
 	{   
 	    int n;
 	    cout << "Enter the number of managers: ";
 	    cin >> n;
 	    vector<Manager> managers;
 	    for (int i = 0; i < n; ++i)
 	    {
 	        Manager manager;
 	        cout << "\nEnter details for Manager " << i + 1 << ":\n";
 	        manager.acceptDetails();
 	        managers.push_back(manager);
 	    }
 	
 	    double maxSalary = 0.0;
 	    int indexOfHighestSalary = -1;
 	    for (int i = 0; i < n; ++i)
 	    {
 	        if (managers[i].basic_salary > maxSalary)
 	        {
 	            maxSalary = managers[i].basic_salary;
 	            indexOfHighestSalary = i;
 	        }
 	    }
 	    if (indexOfHighestSalary != -1)
 	    {
 	        cout << "\nManager with the highest salary:\n";
 	        managers[indexOfHighestSalary].displayDetails();
 	    }
 	    else
 	    {
 	        cout << "\nNo managers entered or an error occurred while finding the highest salary." << endl;
 	    }
 	    return 0;
 	}