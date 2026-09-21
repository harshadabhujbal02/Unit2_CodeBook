#include <iostream>     // Provides input and output functions
#include <string>       // Provides the string data type
#include <utility>      // Provides move()
using namespace std;    // Allows us to use cout, string, etc. without std::
// Base class
class Person
{
protected:
    string name;        // Stores the name of the person
public:
    // Constructor of Person
    explicit Person(string personName)
        : name(move(personName))
    {
        // personName is received as input
        // move(personName) transfers the value to name
    }
    // Function to display the person's name
    void displayName() const
    {
        cout << "Name: " << name << '\n';
        // cout       -> displays output
        // "Name: "   -> text displayed
        // name       -> displays person's name
        // '\n'       -> moves cursor to next line
    }
};
// Derived class
// Student inherits publicly from Person
class Student : public Person
{
private:
    int rollNumber;     // Stores student's roll number
public:
    // Constructor of Student
    Student(string studentName, int roll)
        : Person(move(studentName)), rollNumber(roll)
    {
        // Calls Person constructor
        // Stores roll in rollNumber
    }
    // Function to display student details
    void displayStudent() const
    {
        displayName();  // Calls inherited function
        cout << "Roll Number: " << rollNumber << '\n';
        // Displays student's roll number
    }
};
// Main function
int main()
{
    // Creates Student object
    // "Amit" is the name
    // 101 is the roll number
    Student student("Amit", 101);
    // Calls displayStudent() function
    student.displayStudent();
    return 0;          // Ends the program successfully
}