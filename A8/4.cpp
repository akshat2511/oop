#include <iostream>
 	using namespace std;
 	class Employee
 	{
 	protected:
 	    string name;
 	    int empId;
 	    string gender;
 	
 	public:
 	    Employee(string name, int empId, string gender)
 	    {
 	        this->name = name;
 	        this->empId = empId;
 	        this->gender = gender;
 	    }
 	};
 	class Department
 	{
 	protected:
 	    string departmentName;
 	    string assignedWork;
 	    int timeInHoursToCompleteWork;
 	
 	public:
 	    Department(string departmentName, string assignedWork, int timeInHoursToCompleteWork)
 	    {
 	        this->departmentName = departmentName;
 	        this->assignedWork = assignedWork;
 	        this->timeInHoursToCompleteWork = timeInHoursToCompleteWork;
 	    }
 	};
 	class EmployeeInformation : public Employee, public Department
 	{
 	public:
 	    EmployeeInformation(string name, int empId, string gender, string departmentName, string assignedWork, int timeInHoursToCompleteWork)
 	        : Employee(name, empId, gender), Department(departmentName,assignedWork, timeInHoursToCompleteWork) {}
 	    void printEmployeeInformation()
 	    {
 	        cout << "Employee Name: " << name << endl;
 	        cout << "Employee ID: " << empId << endl;
 	        cout << "Employee Gender: " << gender << endl;
 	        cout << "Department Name: " << departmentName << endl;
 	        cout << "Assigned Work: " << assignedWork << endl;
 	        cout << "Time in Hours to Complete Work: " << timeInHoursToCompleteWork << endl;
 	    }
 	};
 	
 	int main()
 	{
 	    string name, departmentName, assignedWork;
 	    int empId, timeInHoursToCompleteWork;
 	    string gender;
 	    cout << "Enter employee's basic information: Name, Emp._Id, Gender: ";
 	    cin >> name >> empId >> gender;
 	    cout << "Enter Employee's Department Information: Department_Name,Assigned_Work,Time in hour to complete work : ";
 	    cin >> departmentName >> assignedWork >> timeInHoursToCompleteWork;
 	    EmployeeInformation employeeInformation(name, empId, gender, departmentName,assignedWork, timeInHoursToCompleteWork);
 	    cout << endl;
 	    employeeInformation.printEmployeeInformation();
 	    return 0;
 	}