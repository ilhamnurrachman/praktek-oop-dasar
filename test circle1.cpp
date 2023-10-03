#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Circle {
private:
  double radius;
  string color;

public:
  // Default constructor
  Circle() {
    radius = 1.0;
    color = "red";
  }

  // Constructor with radius
  Circle(double radius) {
    this->radius = radius;
    color = "red";
  }

  // Constructor with radius and color
  Circle(double radius, string color) {
    this->radius = radius;
    this->color = color;
  }

  // Setter for color
  void setColor(string color) {
    this->color = color;
  }

  // Getter for radius
  double getRadius() {
    return radius;
  }

  // Getter for color
  string getColor() {
    return color;
  }

  // Returns a self-descriptive string for this Circle instance
  string toString() {
    return "Circle[radius=" + to_string(radius) + ", color=" + color + "]";
  }

  // Returns the area of this Circle
  double getArea() {
    return radius * radius * M_PI;
  }

  // Returns the circumference of this Circle
  double getCircumference() {
    return 2.0 * radius * M_PI;
  }
};

int main() {
  // Create a Circle object with default radius and color
  Circle circle1;

  // Create a Circle object with radius 2.0 and color "blue"
  Circle circle2(2.0, "blue");

  // Create a Circle object with radius 2.0
  Circle circle3(2.0);

  // Print the radius and color of circle1
  cout << "The radius is: " << circle1.getRadius() << endl;
  cout << "The color is: " << circle1.getColor() << endl;

  // Print the radius and color of circle2
  cout << "The radius is: " << circle2.getRadius() << endl;
  cout << "The color is: " << circle2.getColor() << endl;

  // Print the radius and color of circle3
