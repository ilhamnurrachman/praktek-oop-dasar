#include <iostream>
#include <string>

using namespace std;

class Date {
private:
    int year, month, day;

public:
    Date(int year, int month, int day) : year(year), month(month), day(day) {}

    int getYear() {
        return year;
    }

    int getMonth() {
        return month;
    }

    int getDay() {
        return day;
    }

    void setYear(int year) {
        this->year = year;
    }

    void setMonth(int month) {
        this->month = month;
    }

    void setDay(int day) {
        this->day = day;
    }

    string toString() {
        return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
    }

    void setDate(int year, int month, int day) {
        this->year = year;
        this->month = month;
        this->day = day;
    }
};

int main() {
    // Test constructor and toString()
    Date d1(2020, 2, 8);
    cout << d1.toString() << endl;
    //02/08/2020

    // Test Setters and Getters
    d1.setYear(2012);
    d1.setMonth(12);
    d1.setDay(23);
    cout << d1.toString() << endl;
    //12/23/2012
    cout << "Year is: " << d1.getYear() << endl;
    //Year is: 2012
    cout << "Month is: " << d1.getMonth() << endl;
    //Month is: 12
    cout << "Day is: " << d1.getDay() << endl;
    //Day is: 23

    // Test setDate()
    d1.setDate(2988, 1, 2);
    cout << d1.toString() << endl;
    //01/02/2988

    return 0;
}
