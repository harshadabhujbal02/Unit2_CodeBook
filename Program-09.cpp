#include <iostream>     // Provides input/output functions
#include <string>       // Provides string data type
#include <utility>      // Provides move() function
using namespace std;    // Allows us to use cout and string without std::
// Base class
class Person
{
protected:
    string name;        // Stores the person's name
public:
    // Parameterized constructor of Person
    explicit Person(string personName)
        : name(move(personName))
    {
        // personName receives the name
        // move(personName) transfers the value
        // name stores the transferred value
    }
};
// Derived class
class Student : public Person
{
private:
    int rollNumber;     // Stores student's roll number
public:
    // Parameterized constructor of Student
    Student(string studentName, int roll)
        : Person(move(studentName)),   // Calls Person constructor
          rollNumber(roll)             // Initializes rollNumber
    {
        // Constructor body
        // No additional statements are required
    }
    // Function to display student details
    void display() const
    {
        // name is inherited from Person
        cout << "Name: " << name << '\n';
        // Displays student's roll number
        cout << "Roll Number: " << rollNumber << '\n';
    }
};
// Main function
int main()
{
    // Creates Student object
    // "Kiran" is passed as studentName
    // 24 is passed as roll
    Student student("Kiran", 24);
    // Calls display() function
    student.display();
    return 0;          // Successfully terminates the program
}