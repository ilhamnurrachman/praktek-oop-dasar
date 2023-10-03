#include <iostream>
#include <string>

using namespace std;

class Time {
private:
  int second;
  int minute;
  int hour;

public:
  // Constructors
  Time(int second, int minute, int hour) {  // Constructor with parameters
    this->second = second;
    this->minute = minute;
    this->hour = hour;
  }
  Time() {  // Default constructor
    this->second = 0;
    this->minute = 0;
    this->hour = 0;
  }

  // Getters and setters
  int getSecond() { return this->second; }
  void setSecond(int second) { this->second = second; }
  int getMinute() { return this->minute; }
  void setMinute(int minute) { this->minute = minute; }
  int getHour() { return this->hour; }
  void setHour(int hour) { this->hour = hour; }

  // Methods
  string toString() {
    // Use C++ string stream to format the output
    stringstream ss;
    ss << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
    return ss.str();
  }

  void setTime(int second, int minute, int hour) {
    // No input validation
    this->second = second;
    this->minute = minute;
    this->hour = hour;
  }

  Time nextSecond() {
    ++second;
    if (second >= 60) {
      second = 0;
      ++minute;
      if (minute >= 60) {
        minute = 0;
        ++hour;
        if (hour >= 24) {
          hour = 0;
        }
      }
    }
    return *this;  // Return "this" instance, to support chaining operations
  }
};

int main() {
  // Create a Time object
  Time t1(12, 34, 56);

  // Print the time
  cout << t1.toString() << endl;

  // Advance the time
