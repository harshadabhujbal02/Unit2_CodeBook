#include <iostream>     // Provides cout
#include <string>       // Provides string data type
#include <utility>      // Provides move()
using namespace std;    // Allows cout and string without std::
// Outer class
class University
{
public:
    // Nested class
    // Department is defined inside University
    class Department
    {
    private:
        string name;    // Stores department name
    public:
        // Constructor of Department
        explicit Department(string departmentName)
            : name(move(departmentName))
        {
            // Stores department name
        }
        // Function to display department
        void display() const
        {
            cout << "Department: "
                 << name << '\n';
            // Displays department name
        }
    };
};
// Main function
int main()
{
    // Creates an object of the nested class
    // Syntax:
    // OuterClass::NestedClass object;
    University::Department department(
        "Artificial Intelligence and Data Science"
    );
    // Calls display() function
    department.display();
    return 0;          // Ends the program
}