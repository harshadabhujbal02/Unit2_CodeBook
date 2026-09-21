#include <iostream>     // Provides cout
#include <string>       // Provides string
#include <utility>      // Provides move()
using namespace std;    // Allows cout and string without std::
// Abstract base class
class Employee
{
protected:
    int employeeId;
    // Stores employee ID
    string name;
    // Stores employee name
public:
    // Parameterized constructor
    Employee(int id, string employeeName)
        : employeeId(id),
          name(move(employeeName))
    {
        // Initializes employee ID
        // Initializes employee name
    }
    // Pure virtual function
    virtual double calculateSalary() const = 0;
    // This makes Employee an abstract class
    // Function to display basic employee details
    void displayBasicDetails() const
    {
        // Displays employee ID
        cout << "Employee ID: "
             << employeeId << '\n';
        // Displays employee name
        cout << "Name: "
             << name << '\n';
    }
    // Virtual destructor
    virtual ~Employee() = default;
};
// Derived class for permanent employees
class PermanentEmployee : public Employee
{
private:
    double basicSalary;
    // Stores basic salary
    double allowance;
    // Stores additional allowance
public:
    // Constructor
    PermanentEmployee(
        int id,
        string employeeName,
        double basic,
        double extra
    )
        : Employee(id, move(employeeName)),
          basicSalary(basic),
          allowance(extra)
    {
        // Calls Employee constructor
        // Initializes basic salary
        // Initializes allowance
    }
    // Overrides calculateSalary()
    double calculateSalary() const override
    {
        // Permanent employee salary:
        // Basic salary + allowance
        return basicSalary + allowance;
    }
};
// Derived class for contract employees
class ContractEmployee : public Employee
{
private:
    double hourlyRate;
    // Stores salary per hour
    int hoursWorked;
    // Stores number of hours worked
public:
    // Constructor
    ContractEmployee(
        int id,
        string employeeName,
        double rate,
        int hours
    )
        : Employee(id, move(employeeName)),
          hourlyRate(rate),
          hoursWorked(hours)
    {
        // Calls Employee constructor
        // Initializes hourly rate
        // Initializes hours worked
    }
  // Overrides calculateSalary()
    double calculateSalary() const override
    {
        // Contract salary:
        // Hourly rate × hours worked

        return hourlyRate * hoursWorked;
    }
};
// Function to display employee payslip
void displayPaySlip(const Employee& employee)
{
    // Displays basic employee information
    employee.displayBasicDetails();
    // Calls the appropriate calculateSalary()
    // according to the actual object
    cout << "Salary: "
         << employee.calculateSalary()
         << "\n\n";
}
// Main function
int main()
{
    // Creates PermanentEmployee object
    PermanentEmployee permanentEmployee(
        101,             // Employee ID
        "Asha",          // Employee name
        40000.0,         // Basic salary
        8000.0           // Allowance
    );
    // Creates ContractEmployee object
    ContractEmployee contractEmployee(
        102,             // Employee ID
        "Vikas",         // Employee name
        500.0,           // Hourly rate
        80               // Hours worked
    );
    // Displays permanent employee payslip
    displayPaySlip(permanentEmployee);
    // Displays contract employee payslip
    displayPaySlip(contractEmployee);
    
    return 0;          // Ends the program
}