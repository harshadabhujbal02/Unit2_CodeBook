#include <iostream>     // Provides cout
using namespace std;    // Allows cout without std::
// Abstract base class
class Shape
{
public:
    // Pure virtual function
    virtual double area() const = 0;
    // Virtual destructor
    virtual ~Shape() = default;
};
// Derived class Rectangle
class Rectangle : public Shape
{
private:
    double length;      // Stores rectangle length
    double width;       // Stores rectangle width
public:
    // Parameterized constructor
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength),
          width(givenWidth)
    {
        // Initializes length
        // Initializes width
    }
    // Overrides the pure virtual function
    double area() const override
    {
        // Formula:
        // Area = length × width
        return length * width;
    }
};
// Derived class Circle
class Circle : public Shape
{
private:
    double radius;      // Stores circle radius
public:
    // Parameterized constructor
    explicit Circle(double givenRadius)
        : radius(givenRadius)
    {
        // Initializes radius
    }
    // Overrides area() function
    double area() const override
    {
        // Formula:
        // Area = π × radius × radius
        return 3.141592653589793 * radius * radius;
    }
};
// Main function
int main()
{
    // Creates Rectangle object
    Rectangle rectangle(5.0, 3.0);
    // Creates Circle object
    Circle circle(2.0);
    // Displays rectangle area
    cout << "Rectangle Area: "
         << rectangle.area() << '\n';
    // Displays circle area
    cout << "Circle Area: "
         << circle.area() << '\n';
    return 0;          // Ends the program
}