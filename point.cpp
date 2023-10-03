#include <iostream>
#include <cmath>

using namespace std;

class Point {
public:
  // Constructors
  Point(int x = 0, int y = 0) : x_(x), y_(y) {}

  // Setters and getters
  void setX(int x) { x_ = x; }
  int getX() const { return x_; }

  void setY(int y) { y_ = y; }
  int getY() const { return y_; }

  // Set both x and y
  void setXY(int x, int y) {
    x_ = x;
    y_ = y;
  }

  // Get both x and y
  int* getXY() {
    int* coords = new int[2];
    coords[0] = x_;
    coords[1] = y_;
    return coords;
  }

  // Calculate the distance between this point and another point
  double distance(int x, int y) {
    return sqrt(pow(x_ - x, 2) + pow(y_ - y, 2));
  }

  double distance(const Point& other) {
    return distance(other.x_, other.y_);
  }

  double distance() {
    return sqrt(pow(x_, 2) + pow(y_, 2));
  }

  // Print the point
  friend ostream& operator<<(ostream& os, const Point& point) {
    os << "(" << point.x_ << "," << point.y_ << ")";
    return os;
  }

private:
  int x_;
  int y_;
};

int main() {
  // Create a Point object
  Point p1(1, 2);

  // Print the point
  cout << p1 << endl;

  // Advance the time

  return 0;
}
