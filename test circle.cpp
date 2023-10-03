#include <iostream>
#include <string>

using namespace std;

class Date {
private:
  int year;
  int month;
  int day;

public:
  // Constructor
  Date(int year = 1970, int month = 1, int day = 1) {
    this->year = year;
    this->month = month;
    this->day = day;
  }

  // Getters
  int getYear() const { return year; }
  int getMonth() const { return month; }
  int getDay() const { return day; }

  // Setters
  void setYear(int year) { this->year = year; }
  void setMonth(int month) { this->month = month; }
  void setDay(int day) { this->day = day; }

  // toString()
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

  return 0;
}
