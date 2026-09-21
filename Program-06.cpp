#include <iostream>     // Provides cout
using namespace std;    // Allows cout without std::
// First base class
class Academic
{
protected:
    int academicMarks;          // Stores academic marks
public:
    // Constructor of Academic
    explicit Academic(int marks)
        : academicMarks(marks)
    {
        // Stores marks in academicMarks
    }
    // Function to display academic marks
    void showAcademic() const
    {
        cout << "Academic Marks: "
             << academicMarks << '\n';
        // Displays academic marks
    }
};
// Second base class
class Sports
{
protected:
    int sportsMarks;            // Stores sports marks
public:
    // Constructor of Sports
    explicit Sports(int marks)
        : sportsMarks(marks)
    {
        // Stores marks in sportsMarks
    }
    // Function to display sports marks
    void showSports() const
    {
        cout << "Sports Marks: "
             << sportsMarks << '\n';
        // Displays sports marks
    }
};
// Student inherits from TWO base classes
class Student : public Academic, public Sports
{
public:
    // Constructor of Student
    Student(int academic, int sports)
        : Academic(academic),
          Sports(sports)
    {
        // Calls Academic constructor
        // Calls Sports constructor
    }
    // Function to calculate and display total marks
    void showTotal() const
    {
        cout << "Total Marks: "
             << academicMarks + sportsMarks
             << '\n';
        // Adds academicMarks and sportsMarks
    }
};
// Main function
int main()
{
    // Creates Student object
    Student student(80, 15);
    // Displays academic marks
    student.showAcademic();
    // Displays sports marks
    student.showSports();
    // Displays total marks
    student.showTotal();
    return 0;          // Ends program
}