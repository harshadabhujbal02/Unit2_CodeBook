#include <iostream>     // Provides cout
#include <string>       // Provides string
#include <utility>      // Provides move()
using namespace std;    // Allows cout and string without std::
// Base class
class Vehicle
{
protected:
    string registrationNumber;
    // Stores vehicle registration number
    double ratePerDay;
    // Stores rental rate per day
public:
    // Parameterized constructor
    Vehicle(string registration, double rate)
        : registrationNumber(move(registration)),
          ratePerDay(rate)
    {
        // Initializes registration number
        // Initializes daily rental rate
    }
    // Virtual function to calculate rent
    virtual double calculateRent(int days) const
    {
        // Basic rent calculation
        // Rent = rate per day × number of days

        return ratePerDay * days;
    }
    // Virtual function to display vehicle details
    virtual void display() const
    {
        cout << "Registration: "
             << registrationNumber << '\n';
        // Displays registration number
        cout << "Rate per day: "
             << ratePerDay << '\n';
        // Displays daily rental rate
    }
    // Virtual destructor
    virtual ~Vehicle() = default;
};
// Car derived class
class Car : public Vehicle
{
private:
    int numberOfDoors;
    // Stores number of doors in car
public:
    // Car constructor
    Car(string registration, double rate, int doors)
        : Vehicle(move(registration), rate),
          numberOfDoors(doors)
    {
        // Calls Vehicle constructor
        // Initializes number of doors
    }
    // Overrides display() function
    void display() const override
    {
        // Calls Vehicle's display function
        Vehicle::display();
        // Displays number of doors
        cout << "Doors: "
             << numberOfDoors << '\n';
    }
};
// Bike derived class
class Bike : public Vehicle
{
private:
    int engineCapacity;
    // Stores engine capacity in cc
public:
    // Bike constructor
    Bike(string registration, double rate, int capacity)
        : Vehicle(move(registration), rate),
          engineCapacity(capacity)
    {
        // Calls Vehicle constructor
        // Initializes engine capacity
    }
    // Overrides calculateRent()
    double calculateRent(int days) const override
    {
        // Bike gets 10% discount
        // Therefore, multiply rent by 0.9

        return ratePerDay * days * 0.9;
    }
    // Overrides display()
    void display() const override
    {
        // Displays common vehicle information
        Vehicle::display();
        // Displays bike-specific information
        cout << "Engine Capacity: "
             << engineCapacity
             << " cc\n";
    }
};
// Main function
int main()
{
    // Creates Car object
    Car car("MH12AB1234", 2000.0, 5);
    // Creates Bike object
    Bike bike("MH12CD5678", 800.0, 150);

    // Displays Car heading
    cout << "Car Details\n";
    // Displays Car details
    car.display();

    // Calculates rent for 3 days
    cout << "Rent for 3 days: "
         << car.calculateRent(3)
         << "\n\n";

    // Displays Bike heading
    cout << "Bike Details\n";
    // Displays Bike details
    bike.display();
    // Calculates Bike rent for 3 days
    cout << "Rent for 3 days: "
         << bike.calculateRent(3)
         << '\n';

    return 0;          // Ends the program
}