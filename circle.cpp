#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Circle {
public:
    static const double DEFAULT_RADIUS;
    static const string DEFAULT_COLOR;

private:
    double radius;
    string color;

public:
    Circle() : radius(DEFAULT_RADIUS), color(DEFAULT_COLOR) {}
    Circle(double radius) : radius(radius), color(DEFAULT_COLOR) {}
    Circle(double radius, string color) : radius(radius), color(color) {}

    double getRadius() {
        return radius;
    }

    void setRadius(double radius) {
        this->radius = radius;
    }

    string getColor() {
        return color;
    }

    void setColor(string color) {
        this->color = color;
    }

    string toString() {
        return "Circle[radius=" + to_string(radius) + ", color=" + color + "]";
    }

    double getArea() {
        return radius * radius * M_PI;
    }

    double getCircumference() {
        return 2.0 * radius * M_PI;
    }
};

const double Circle::DEFAULT_RADIUS = 1.0;
const string Circle::DEFAULT_COLOR = "red";

int main() {
    // Test all constructors and toString()
    Circle c1(1.1, "blue");
    cout << c1 << endl;  // implicitly run toString()
    //Circle[radius=1.1, color=blue]
    Circle c2(2.2);
    cout << c2 << endl;
    //Circle[radius=2.2, color=red]
    Circle c3;
    cout << c3 << endl;
    //Circle[radius=1.0, color=red]

    // Test Setters and Getters
    c1.setRadius(3.3);
    c1.setColor("green");
    cout << c1 << endl;  // use toString() to inspect the modified instance
    //Circle[radius=3.3, color=green]
    cout << "The radius is: " << c1.getRadius() << endl;
    //The radius is: 3.3
    cout << "The color is: " << c1.getColor() << endl;
    //The color is: green

    // Test getArea() and getCircumference()
    cout << "The area is: " << fixed << c1.getArea() << endl;
    //The area is: 34.21
    cout << "The circumference is: " << fixed << c1.getCircumference() << endl;
    //The circumference is: 20.73

    return 0;
}
