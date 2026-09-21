Student Details

Field	            |          Details

Student Name	    |    Harshada Suresh Bhujbal

Roll No.          |      AD2123

PRN	                |         125UAD1264

Class/Division	    |   SY B.Tech AI & DS – Div A

Course Name	        | Object-Oriented Programming with c++

Unit	            |  Unit 2- Inheritance

===========================================================
ABOUT THE REPOSITORY
============================================================

This code book contains 16 C++ programs covering inheritance
and related Object-Oriented Programming concepts.

===========================================================
CONTENTS
============================================================

1. Basic Single Inheritance
2. Protected Member Access
3. Public versus Private Inheritance
4. Multilevel Inheritance
5. Hierarchical Inheritance
6. Multiple Inheritance
7. Resolving Multiple-Inheritance Ambiguity
8. Constructor and Destructor Order
9. Parameterized Base Constructor
10. Function Overriding
11. Abstract Class
12. Virtual Base Class / Diamond Inheritance
13. Friend Class
14. Nested Class
15. Mini-Project: Vehicle Rental System
16. Mini-Project: Employee Payroll System


============================================================
PROGRAM 1: BASIC SINGLE INHERITANCE
============================================================

Concept:
A derived class inherits properties and functions from one
base class.

Classes:
- Person: Base class
- Student: Derived class

Main idea:
Student inherits the name and display() function from Person.


============================================================
PROGRAM 2: PROTECTED MEMBER ACCESS
============================================================

Concept:
A protected member can be accessed inside the class itself
and inside its derived classes.

Classes:
- Employee: Base class
- Developer: Derived class

Main idea:
The protected salary member of Employee is accessed by
Developer.


============================================================
PROGRAM 3: PUBLIC VERSUS PRIVATE INHERITANCE
============================================================

Concept:
The inheritance mode controls how public and protected
members of the base class are treated in the derived class.

Classes:
- Base
- PublicDerived
- PrivateDerived

Main idea:
Public inheritance keeps accessible public members public.
Private inheritance makes inherited public/protected members
private within the derived class.


============================================================
PROGRAM 4: MULTILEVEL INHERITANCE
============================================================

Concept:
A class is derived from another derived class, creating
multiple levels of inheritance.

Classes:
- Person
- Employee
- Manager

Inheritance chain:
Person -> Employee -> Manager


============================================================
PROGRAM 5: HIERARCHICAL INHERITANCE
============================================================

Concept:
Multiple derived classes inherit from the same base class.

Classes:
- Vehicle: Base class
- Car: Derived class
- Bike: Derived class

Inheritance structure:

             Vehicle
             /    \            

         Car     Bike


============================================================
PROGRAM 6: MULTIPLE INHERITANCE
============================================================

Concept:
A single derived class inherits from more than one base class.

Classes:
- Academic
- Sports
- Student

Inheritance structure:

       Academic     Sports
           \         /
             Student


============================================================
PROGRAM 7: MULTIPLE-INHERITANCE AMBIGUITY
============================================================

Concept:
Ambiguity can occur when two base classes contain functions
with the same name.

Solution:
Use the scope resolution operator (::) to specify the required
base-class function.

Example:
Academic::display()
Sports::display()


============================================================
PROGRAM 8: CONSTRUCTOR AND DESTRUCTOR ORDER
============================================================

Concept:
In inheritance, the base-class constructor executes before
the derived-class constructor.

Destruction happens in the reverse order.

Order:
Construction:
Base constructor -> Derived constructor

Destruction:
Derived destructor -> Base destructor


============================================================
PROGRAM 9: PARAMETERIZED BASE CONSTRUCTOR
============================================================

Concept:
A derived class can pass values to a parameterized constructor
of its base class using an initializer list.

Classes:
- Person
- Student

Main idea:
Student passes the name to the Person constructor.


============================================================
PROGRAM 10: FUNCTION OVERRIDING
============================================================

Concept:
Function overriding occurs when a derived class provides its
own version of a function already defined in the base class.

Classes:
- Vehicle
- Car
- Boat

Main idea:
Car and Boat provide their own start() functions.


============================================================
PROGRAM 11: ABSTRACT CLASS
============================================================

Concept:
An abstract class contains at least one pure virtual function
and cannot be instantiated directly.

Classes:
- Shape: Abstract base class
- Rectangle
- Circle

Pure virtual function:
area()


============================================================
PROGRAM 12: VIRTUAL BASE CLASS / DIAMOND INHERITANCE
============================================================

Concept:
Virtual inheritance prevents duplicate copies of a common
base class when multiple inheritance creates a diamond structure.

Classes:
- Person
- Student
- Employee
- TeachingAssistant

Structure:

             Person
             /            Student   Employee
             \    /
        TeachingAssistant

virtual inheritance ensures that TeachingAssistant contains
only one shared Person subobject.


============================================================
PROGRAM 13: FRIEND CLASS
============================================================

Concept:
A friend class can access private and protected members of
another class when friendship is explicitly granted.

Classes:
- Account
- Auditor

Main idea:
Auditor is declared as a friend of Account and can access
Account's private balance.


============================================================
PROGRAM 14: NESTED CLASS
============================================================

Concept:
A class declared inside another class is called a nested class.

Classes:
- University
- Department

Main idea:
Department is declared inside University and is accessed
through the outer class.


============================================================
PROGRAM 15: MINI-PROJECT - VEHICLE RENTAL SYSTEM
============================================================

Concepts demonstrated:
- Inheritance
- Function overriding
- Runtime polymorphism through virtual functions

Classes:
- Vehicle
- Car
- Bike

Main idea:
Different vehicle types calculate rental costs differently
while sharing a common Vehicle interface.


============================================================
PROGRAM 16: MINI-PROJECT - EMPLOYEE PAYROLL SYSTEM
============================================================

Concepts demonstrated:
- Inheritance
- Function overriding
- Runtime polymorphism

Classes:
- Employee
- PermanentEmployee
- ContractEmployee

Main idea:
Different employee types calculate salary according to their
own rules while using a common base-class interface.


============================================================
IMPORTANT C++ KEYWORDS USED
============================================================

class
    Used to define a class.

public
    Members are accessible from outside the class according to
    the inheritance/access rules.

private
    Members are accessible only inside the class and permitted
    friends.

protected
    Members are accessible inside the class and its derived
    classes.

inheritance
    Mechanism by which a derived class obtains members/features
    from a base class.

virtual
    Enables dynamic dispatch when functions are overridden.

override
    Indicates that a derived-class function overrides a virtual
    function from the base class.

friend
    Gives a specified function or class access to private and
    protected members.

using namespace std;
    Allows standard-library names such as cout and string to be
    used without writing std:: before them.

::
    Scope resolution operator used to specify a class or scope.


============================================================
HOW TO COMPILE
============================================================

Use a C++17-compatible compiler.

Example with g++:

g++ -std=c++17 filename.cpp -o program

Run on Windows:

program.exe

Run on Linux/macOS:

./program



============================================================
END OF README
============================================================
