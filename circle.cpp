#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Circle {
public:
  // The public constants
  static const double DEFAULT_RADIUS = 1.0;
  static const string DEFAULT_COLOR = "red";

  // The private instance variables
  double radius;
  string color;

  // The (overloaded) constructors
  /** Constructs a Circle with default radius and color */
  Circle() {  // 1st (default) Constructor
    this->radius = DEFAULT_RADIUS;
    this->color = DEFAULT_COLOR;
  }
  /** Constructs a Circle with the given radius and default color */
  Circle(double radius) {  // 2nd Constructor
    this->radius = radius;
    this->color = DEFAULT_COLOR;
  }
  /** Constructs a Circle with the given radius and color */
  Circle(double radius, string color) {  // 3rd Constructor
    this->radius = radius;
    this->color = color;
  }

  /** Returns the radius - the public getter for private variable radius. */
  double getRadius() {
    return this->radius;
  }
  /** Sets the radius - the public setter for private variable radius */
  void setRadius(double radius) {
    this->radius = radius;
  }
  /** Returns the color - the public getter for private variable color */
  string getColor() {
    return this->color;
  }
  /** Sets the color - the public setter for private variable color */
  void setColor(string color) {
    this->color = color;
  }

  /** Returns a self-descriptive string for this Circle instance */
  string toString() {
    return "Circle[radius=" + to_string(radius) + ", color=" + color + "]";
  }

  /** Returns the area of this Circle */
  double getArea() {
    return radius * radius * M_PI;
  }

  /** Returns the circumference of this Circle */
  double getCircumference() {
    return 2.0 * radius * M_PI;
  }
};

int main() {
  // Create a Circle object with default radius and color
  Circle circle1;
