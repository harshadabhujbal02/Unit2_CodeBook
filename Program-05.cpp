#include <iostream>     // Provides cout
#include <string>       // Provides string
#include <utility>      // Provides move()
using namespace std;    // Allows us to use cout and string without std::
// Base class
class Vehicle
{
protected:
    string registrationNumber;     // Stores vehicle registration number
public:
    // Constructor of Vehicle
    explicit Vehicle(string registration)
        : registrationNumber(move(registration))
    {
        // Stores registration number
    }
    // Function to start the vehicle
    void start() const
    {
        cout << "Vehicle " << registrationNumber
             << " started\n";
        // Displays vehicle registration number
        // and starting message
    }
};
// Derived class 1
class Car : public Vehicle
{
public:
    // Constructor of Car
    explicit Car(string registration)
        : Vehicle(move(registration))
    {
        // Calls Vehicle constructor
    }
    // Function specific to Car
    void openBoot() const
    {
        cout << "Car boot opened\n";
        // Displays boot opening message
    }
};
// Derived class 2
class Bike : public Vehicle
{
public:
    // Constructor of Bike
    explicit Bike(string registration)
        : Vehicle(move(registration))
    {
        // Calls Vehicle constructor
    }
    // Function specific to Bike
    void helmetReminder() const
    {
        cout << "Please wear a helmet\n";
        // Displays helmet reminder
    }
};
// Main function
int main()
{
    // Creates Car object
    Car car("MH12AB1234");
    // Creates Bike object
    Bike bike("MH12CD5678");
    // Calls inherited start() function
    car.start();
    // Calls Car's own function
    car.openBoot();
    // Calls inherited start() function
    bike.start();
    // Calls Bike's own function
    bike.helmetReminder();
    return 0;          // Ends the program
}