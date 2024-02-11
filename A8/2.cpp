#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    Employee(const string &empName, int empId, const string &address, const string &mailId, long long mobileNo)
        : empName(empName), empId(empId), address(address), mailId(mailId),
          mobileNo(mobileNo) {}
    void display() const
    {
        cout << "Employee Name: " << empName << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Address: " << address << endl;
        cout << "Mail ID: " << mailId << endl;
        cout << "Mobile Number: " << mobileNo << endl;
    }
    virtual double calculateGrossSalary() const = 0;
    virtual double calculateNetSalary() const = 0;

protected:
    string empName;
    int empId;
    string address;
    string mailId;
    long long mobileNo;
};
class Programmer : public Employee
{
public:
    Programmer(const string &empName, int empId, const string &address, const string &mailId, long long mobileNo, double basicPay)
        : Employee(empName, empId, address, mailId, mobileNo),
          basicPay(basicPay) {}
    double calculateGrossSalary() const override
    {
        return basicPay + 0.97 * basicPay + 0.10 * basicPay;
    }
    double calculateNetSalary() const override
    {
        return calculateGrossSalary() - (0.12 * basicPay + 0.001 * basicPay);
    }
    void displayPaySlip() const
    {
        cout << "Pay Slip for Programmer:" << endl;
        display();
        cout << "Basic Pay: $" << basicPay << endl;
        cout << "Gross Salary: $" << calculateGrossSalary() << endl;
        cout << "Net Salary: $" << calculateNetSalary() << endl;
    }

private:
    double basicPay;
};
class AssistantProfessor : public Employee
{
public:
    AssistantProfessor(const string &empName, int empId, const string &address, const string &mailId, long long mobileNo, double basicPay)
        : Employee(empName, empId, address, mailId, mobileNo),
          basicPay(basicPay) {}
    double calculateGrossSalary() const override
    {
        return basicPay + 0.97 * basicPay + 0.10 * basicPay;
    }
    double calculateNetSalary() const override
    {
        return calculateGrossSalary() - (0.12 * basicPay + 0.001 * basicPay);
    }
    void displayPaySlip() const
    {
        cout << "Pay Slip for Assistant Professor:" << endl;
        display();
        cout << "Basic Pay: $" << basicPay << endl;
        cout << "Gross Salary: $" << calculateGrossSalary() << endl;
        cout << "Net Salary: $" << calculateNetSalary() << endl;
    }

private:
    double basicPay;
};
class AssociateProfessor : public Employee
{
public:
    AssociateProfessor(const string &empName, int empId, const string &address, const string &mailId, long long mobileNo, double basicPay)
        : Employee(empName, empId, address, mailId, mobileNo),
          basicPay(basicPay) {}
    double calculateGrossSalary() const override
    {
        return basicPay + 0.97 * basicPay + 0.10 * basicPay;
    }
    double calculateNetSalary() const override
    {
        return calculateGrossSalary() - (0.12 * basicPay + 0.001 * basicPay);
    }
    void displayPaySlip() const
    {
        cout << "Pay Slip for Associate Professor:" << endl;
        display();
        cout << "Basic Pay: $" << basicPay << endl;
        cout << "Gross Salary: $" << calculateGrossSalary() << endl;
        cout << "Net Salary: $" << calculateNetSalary() << endl;
    }

private:
    double basicPay;
};
class Professor : public Employee
{
public:
    Professor(const string &empName, int empId, const string &address, const string &mailId, long long mobileNo, double basicPay)
        : Employee(empName, empId, address, mailId, mobileNo),
          basicPay(basicPay) {}
    double calculateGrossSalary() const override
    {
        return basicPay + 0.97 * basicPay + 0.10 * basicPay;
    }
    double calculateNetSalary() const override
    {
        return calculateGrossSalary() - (0.12 * basicPay + 0.001 * basicPay);
    }
    void displayPaySlip() const
    {
        cout << "Pay Slip for Professor:" << endl;
        display();
        cout << "Basic Pay: $" << basicPay << endl;
        cout << "Gross Salary: $" << calculateGrossSalary() << endl;
        cout << "Net Salary: $" << calculateNetSalary() << endl;
    }

private:
    double basicPay;
};
int main()
{
    Programmer programmer("Raj", 101, "A street", "raj@email.com", 1234567890,
                          50000);
    AssistantProfessor assistantProfessor("Rohan", 201, "J street",
                                          "rohan666@email.com", 9876543210, 60000);
    AssociateProfessor associateProfessor("Anand", 301, "W Street",
                                          "anand12@email.com", 5555555555, 70000);
    Professor professor("Rohit", 401, "M street", "rohitttt43@email.com",
                        9999999999, 80000);
    programmer.displayPaySlip();
    cout << endl;
    assistantProfessor.displayPaySlip();
    cout << endl;
    associateProfessor.displayPaySlip();
    cout << endl;
    professor.displayPaySlip();
    return 0;
}


