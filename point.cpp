#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    int x, y;

public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}

    int getX() {
        return x;
    }

    void setX(int x) {
        this->x = x;
    }

    int getY() {
        return y;
    }

    void setY(int y) {
        this->y = y;
    }

    string toString() {
        return "(" + to_string(x) + "," + to_string(y) + ")";
    }

    int* getXY() {
        int* results = new int[2];
        results[0] = x;
        results[1] = y;
        return results;
    }

    void setXY(int x, int y) {
        this->x = x;
        this->y = y;
    }

    double distance(int x, int y) {
        int xDiff = this->x - x;
        int yDiff = this->y - y;
        return sqrt(xDiff * xDiff + yDiff * yDiff);
    }

    double distance(Point another) {
        int xDiff = this->x - another.x;
        int yDiff = this->y - another.y;
        return sqrt(xDiff * xDiff + yDiff * yDiff);
    }

    double distance() {
        return sqrt(x * x + y * y);
    }
};

int main() {
    Point p1(1, 2);
    cout << p1.toString() << endl;
    //(1,2)
    Point p2;
    cout << p2.toString() << endl;
    //(0,0)

    p1.setX(3);
    p1.setY(4);
    cout << p1.toString() << endl;
    //(3,4)
    cout << "X is: " << p1.getX() << endl;
    //X is: 3
    cout << "Y is: " << p1.getY() << endl;
    //Y is: 4

    p1.setXY(5, 6);
    cout << p1.toString() << endl;
    //(5,6)
    cout << "X is: " << p1.getXY()[0] << endl;
    //X is: 5
    cout << "Y is: " << p1.getXY()[1] << endl;
    //Y is: 6

    Point p3(10, 11);
    cout << "Distance is: " << p1.distance(10, 11) << endl;
    //Distance is: 7.07107
    cout << "Distance is: " << p1.distance(p3) << endl;
    //Distance is: 7.07107
    cout << "Distance is: " << p3.distance(p1) << endl;
    //Distance is: 7.07107
    cout << "Distance is: " << p1.distance() << endl;
    //Distance is: 7.81025

    return 0;
}
