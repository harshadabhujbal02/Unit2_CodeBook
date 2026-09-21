#include <iostream>     // Provides cout
#include <string>       // Provides string
#include <utility>      // Provides move()
using namespace std;    // Avoids std::
// First level: Base class
class Person
{
protected:
    string name;        // Stores person's name
public:
    // Constructor of Person
    explicit Person(string personName)
        : name(move(personName))
    {
        // Stores personName in name
    }
    // Function to display person details
    void showPerson() const
    {
        cout << "Name: " << name << '\n';
        // Displays name
    }
};
// Second level
// Employee inherits from Person
class Employee : public Person
{
protected:
    int employeeId;     // Stores employee ID
public:
    // Employee constructor
    Employee(string employeeName, int id)
        : Person(move(employeeName)),
          employeeId(id)
    {
        // Calls Person constructor
        // Stores employee ID
    }
    // Function to display employee details
    void showEmployee() const
    {
        cout << "Employee ID: " << employeeId << '\n';
        // Displays employee ID
    }
};
// Third level
// Manager inherits from Employee
class Manager : public Employee
{
private:
    int teamSize;       // Stores number of team members
public:
    // Manager constructor
    Manager(string managerName, int id, int size)
        : Employee(move(managerName), id),
          teamSize(size)
    {
        // Calls Employee constructor
        // Stores team size
    }
    // Function to display manager details
    void showManager() const
    {
        // Calls Person's function
        showPerson();
        // Calls Employee's function
        showEmployee();
        // Displays manager's team size
        cout << "Team Size: " << teamSize << '\n';
    }
};
// Main function
int main()
{
    // Creates Manager object
    Manager manager("Ravi", 501, 8);
    // Displays complete manager information
    manager.showManager();
    return 0;          // End program
}