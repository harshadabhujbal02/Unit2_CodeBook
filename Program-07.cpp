#include <iostream>     // Provides cout
using namespace std;    // Allows cout without std::
// First base class
class Academic
{
public:
    // Function named display()
    void display() const
    {
        cout << "Academic information\n";
        // Displays academic information
    }
};
// Second base class
class Sports
{
public:
    // Function with SAME name display()
    void display() const
    {
        cout << "Sports information\n";
        // Displays sports information
    }
};
// Student inherits from both classes
class Student : public Academic, public Sports
{
public:
    // Function to display information from both classes
    void displayAll() const
    {
        // Academic:: specifies Academic class
        // display() calls Academic's display function
        Academic::display();
        // Sports:: specifies Sports class
        // display() calls Sports' display function
        Sports::display();
    }
};
// Main function
int main()
{
    // Creates Student object
    Student student;
    // Calls Academic's display()
    student.Academic::display();
    // Calls Sports' display()
    student.Sports::display();
    // Calls both functions
    student.displayAll();
    return 0;          // Ends program
}