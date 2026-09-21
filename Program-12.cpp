#include <iostream>     // Provides cout
#include <string>       // Provides string data type
#include <utility>      // Provides move()
using namespace std;    // Allows cout and string without std::
// Base class
class Person
{
protected:
    string name;        // Stores person's name
public:
    // Parameterized constructor
    explicit Person(string personName)
        : name(move(personName))
    {
        // Stores the person's name
    }
    // Function to display name
    void displayName() const
    {
        cout << "Name: " << name << '\n';
        // Displays person's name
    }
};
// Student inherits Person virtually
class Student : virtual public Person
{
public:
    // Constructor of Student
    Student()
        : Person("Unknown")
    {
        // Calls Person constructor
        // But Person is a virtual base
    }
};
// Employee inherits Person virtually
class Employee : virtual public Person
{
public:
    // Constructor of Employee
    Employee()
        : Person("Unknown")
    {
        // Calls Person constructor
        // But Person is a virtual base
    }
};
// TeachingAssistant inherits from Student and Employee
class TeachingAssistant : public Student, public Employee
{
public:
    // Constructor of TeachingAssistant
    explicit TeachingAssistant(string assistantName)
        : Person(move(assistantName)),   // Initializes virtual base
          Student(),                    // Calls Student constructor
          Employee()                    // Calls Employee constructor
    {
        // TeachingAssistant directly initializes Person
    }
};
// Main function
int main()
{
    // Creates TeachingAssistant object
    TeachingAssistant assistant("Riya");
    // Calls Person's displayName()
    assistant.displayName();
    return 0;          // Ends the program
}