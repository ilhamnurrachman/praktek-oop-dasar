#include <iostream>
#include <string>

using namespace std;

class Date {
private:
  int year, month, day;

public:
  // Constructs a Date instance with the given year, month and day. No input validation
  Date(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
  }

  // The public getters/setters for the private variables
  int getYear() { return this->year; }
  int getMonth() { return this->month; }
  int getDay() { return this->day; }
  void setYear(int year) { this->year = year; }
  void setMonth(int month) { this->month = month; }
  void setDay(int day) { this->day = day; }

  /* Returns a descriptive String in the form "MM/DD/YYYY" with leading zero */
  string toString() {
    // Use built-in function String.format() to form a formatted String
    return std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
  }

  /** Sets year, month and day. No input validation */
  void setDate(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
  }
};

int main() {
  // Test Setters and Getters
  Date d1(2012, 12, 23);
  cout << d1 << endl;
  // 12/23/2012
  cout << "Year is: " << d1.getYear() << endl;
  // Year is: 2012
  cout << "Month is: " << d1.getMonth() << endl;
  // Month is: 12
  cout << "Day is: " << d1.getDay() << endl;
  // Day is: 23

  // Test setDate()
  d1.setDate(29, 2, 2020);
  cout << d1 << endl;
