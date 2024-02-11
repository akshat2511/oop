#include <iostream>
 	using namespace std;
 	class Student
 	{
 	protected:
 	    string name;
 	    int rollNumber;
 	
 	public:
 	    Student(string name, int rollNumber)
 	    {
 	        this->name = name;
 	        this->rollNumber = rollNumber;
 	    }
 	};
 	
 	class Marks : public Student
 	{
 	protected:
 	    int OOPMarks;
 	    int DBMSMarks;
 	    int DAAMarks;
 	    int COMarks;
 	    int DMMarks;
 	
 	public:
 	    Marks(string name, int rollNumber, int OOPMarks, int DBMSMarks, int DAAMarks, int COMarks, int DMMarks)
 	        : Student(name, rollNumber)
 	    {
 	        this->OOPMarks = OOPMarks;
 	        this->DBMSMarks = DBMSMarks;
 	        this->DAAMarks = DAAMarks;
 	        this->COMarks = COMarks;
 	        this->DMMarks = DMMarks;
 	    }
 	};
 	class Percentage : public Marks
 	{
 	public:
 	    Percentage(string name, int rollNumber, int OOPMarks, int DBMSMarks, int DAAMarks, int COMarks, int DMMarks)
 	        : Marks(name, rollNumber, OOPMarks, DBMSMarks, DAAMarks, COMarks, DMMarks) {}
 	    float calculatePercentage()
 	    {
 	        float totalMarks = OOPMarks + DBMSMarks + DAAMarks + COMarks + DMMarks;
 	        float percentage = (totalMarks / 500) * 100;
 	        return percentage;
 	    }
 	};
 	int main()
 	{
 	    string name;
 	    int rollNumber, OOPMarks, DBMSMarks, DAAMarks, COMarks, DMMarks;
 	    cout << "Enter student's name: " << endl;
 	    cin >> name;
 	    cout << "Enter student's roll number: " << endl;
 	    cin >> rollNumber;
 	    cout << "Enter student's OOP marks: " << endl;
 	    cin >> OOPMarks;
 	    cout << "Enter student's DBMS marks: " << endl;
 	    cin >> DBMSMarks;
 	    cout << "Enter student's DAA marks: " << endl;
 	    cin >> DAAMarks;
 	    cout << "Enter student's CO marks: " << endl;
 	    cin >> COMarks;
 	    cout << "Enter student's DM marks: " << endl;
 	    cin >> DMMarks;
 	    Percentage percentage(name, rollNumber, OOPMarks, DBMSMarks, DAAMarks, COMarks, DMMarks);
 	    float percentageOfStudent = percentage.calculatePercentage();
 	    cout << "Student's percentage: " << percentageOfStudent << endl;
 	    return 0;
 	}