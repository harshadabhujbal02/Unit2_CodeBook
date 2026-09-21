#include <iostream>     // Provides cout
#include <string>       // Provides string
#include <utility>      // Provides move()
using namespace std;    // Avoids writing std::
// Base class
class Employee
{
protected:
    string name;        // Protected member
                        // Can be accessed inside Employee
                        // and inside derived classes
public:
    // Employee constructor
    explicit Employee(string employeeName)
        : name(move(employeeName))
    {
        // Stores employee name in name
    }
};
// Derived class
class Developer : public Employee
{
private:
    string language;    // Stores programming language
public:
    // Developer constructor
    Developer(string employeeName, string programmingLanguage)
        : Employee(move(employeeName)),
          language(move(programmingLanguage))
    {
        // Employee(...) calls base class constructor
        // language stores programming language
    }
    // Function to display details
    void display() const
    {
        // name belongs to Employee
        // It can be accessed here because it is protected
        cout << "Developer: " << name << '\n';
        // Displays programming language
        cout << "Language: " << language << '\n';
    }
};
// Main function
int main()
{
    // Creates Developer object
    Developer developer("Neha", "C++");
    // Calls display function
    developer.display();
    return 0;          // Successful termination
}