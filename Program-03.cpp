#include <iostream>     // Provides cout
using namespace std;    // Allows cout without std::
/*
    Base class
*/
class Base
{
public:
    // Public function
    void show() const
    {
        cout << "Base public function\n";
        // Displays message
    }
};
/*
    Public inheritance
    Base public members remain public
*/
class PublicDerived : public Base
{
    // No additional members
};
/*
    Private inheritance
    Base public members become private inside PrivateDerived
*/
class PrivateDerived : private Base
{
public:
    // Public function of derived class
    void callBaseShow() const
    {
        // show() is inherited from Base
        // It can be called inside the derived class
        show();
    }
};
// Main function
int main()
{
    // Creates object of PublicDerived
    PublicDerived publicObject;
    // show() is public because inheritance is public
    publicObject.show();
    // Creates object of PrivateDerived
    PrivateDerived privateObject;
    // show() cannot be called directly here
    // because private inheritance makes it private
    // privateObject.show();   // ERROR
    // Instead, call the public function
    // which internally calls show()
    privateObject.callBaseShow();
    return 0;                  // End program
}