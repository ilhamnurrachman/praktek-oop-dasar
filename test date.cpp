#include <iostream>
#include <string>

using namespace std;

class Date {
public:
  // Constructor
  Date(int year, int month, int day) {
    setYear(year);
    setMonth(month);
    setDay(day);
  }

  // Setters and getters
  void setYear(int year) { year_ = year; }
  int getYear() const { return year_; }
  void setMonth(int month) { month_ = month; }
  int getMonth() const { return month_; }
  void setDay(int day) { day_ = day; }
  int getDay() const { return day_; }

  // Set the date all at once
  void setDate(int year, int month, int day) {
    setYear(year);
    setMonth(month);
    setDay(day);
  }

  // Print the date in the format MM/DD/YYYY
  friend ostream& operator<<(ostream& os, const Date& date) {
    os << date.getMonth() << "/" << date.getDay() << "/" << date.getYear();
    return os;
  }

private:
  int year_;
  int month_;
  int day_;
};

int main() {
  // Test constructor and toString()
  Date d1(2020, 2, 8);
  cout << d1 << endl;  // toString()
  // 02/08/2020

  // Test Setters and Getters
  d1.setYear(2012);
  d1.setMonth(12);
  d1.setDay(23);
  cout << d1 << endl;
  // 12/23/2012
  cout << "Year is: " << d1.getYear() << endl;
  // Year is: 2012
  cout << "Month is: " << d1.getMonth() << endl;
  // Month is: 12
  cout << "Day is: " << d1.getDay() << endl;
  // Day is: 23

  // Test setDate()
  d1.setDate(29
