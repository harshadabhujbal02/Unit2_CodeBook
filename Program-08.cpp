#include <iostream>     // Provides cout
using namespace std;    // Allows cout without std::
// Base class
class Base
{
public:
    // Constructor of Base
    Base()
    {
        cout << "Base constructor\n";
        // This message is displayed when
        // Base object is constructed
    }
    // Destructor of Base
    ~Base()
    {
        cout << "Base destructor\n";
        // This message is displayed when
        // Base object is destroyed
    }
};
// Derived class
class Derived : public Base
{
public:
    // Constructor of Derived
    Derived()
    {
        cout << "Derived constructor\n";
        // This message is displayed when
        // Derived object is constructed
    }
    // Destructor of Derived
    ~Derived()
    {
        cout << "Derived destructor\n";
        // This message is displayed when
        // Derived object is destroyed
    }
};
// Main function
int main()
{
    // Creates Derived object
    Derived object;
    // When object is created:
    // Base constructor runs first
    // Derived constructor runs second
    return 0;
    // Before program ends:
    // Derived destructor runs first
    // Base destructor runs second
}