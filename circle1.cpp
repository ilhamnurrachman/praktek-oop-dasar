#include <iostream>
#include <cmath>

using namespace std;

class Circle {
private:
  double radius;
  string color;

public:
  // Constructors
  Circle() {
    radius = 1.0;
    color = "red";
  }
  Circle(double r) {
    radius = r;
    color = "red";
  }
  Circle(double r, string c) {
    radius = r;
    color = c;
  }

  // Getters
  double getRadius() { return radius; }
  string getColor() { return color; }

  // Methods
  double getArea() { return radius * radius * M_PI; }
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
  cout << "The radius is: " << circle3.getRadius() << endl;
  cout << "The color is: " << circle3.getColor() << endl;

  return 0;
}
