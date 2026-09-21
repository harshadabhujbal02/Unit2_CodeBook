#include <iostream>     // Provides cout
using namespace std;    // Allows cout without std::
// Base class
class Vehicle
{
public:
    // Virtual function
    virtual void move() const
    {
        cout << "Vehicle is moving\n";
        // Displays the general vehicle movement
    }
    // Virtual destructor
    virtual ~Vehicle() = default;
};
// Derived class 1
class Car : public Vehicle
{
public:
    // Overrides Vehicle's move() function
    void move() const override
    {
        cout << "Car moves on roads\n";
        // Displays Car-specific movement
    }
};
// Derived class 2
class Boat : public Vehicle
{
public:
    // Overrides Vehicle's move() function
    void move() const override
    {
        cout << "Boat moves on water\n";
        // Displays Boat-specific movement
    }
};
// Main function
int main()
{
    // Creates Car object
    Car car;
    // Creates Boat object
    Boat boat;
    // Calls Car's overridden move()
    car.move();
    // Calls Boat's overridden move()
    boat.move();
    return 0;          // Ends the program successfully
}