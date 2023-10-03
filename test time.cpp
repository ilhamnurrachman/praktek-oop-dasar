#include <iostream>
#include <string>

using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

    string toString() const {
        string result;
        if (hour < 10) result += '0';
        result += to_string(hour) + ':';
        if (minute < 10) result += '0';
        result += to_string(minute) + ':';
        if (second < 10) result += '0';
        result += to_string(second);
        return result;
    }

    void setHour(int h) { hour = h; }
    void setMinute(int m) { minute = m; }
    void setSecond(int s) { second = s; }

    int getHour() const { return hour; }
    int getMinute() const { return minute; }
    int getSecond() const { return second; }

    void setTime(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    Time nextSecond() {
        second++;
        if (second == 60) {
            second = 0;
            minute++;
            if (minute == 60) {
                minute = 0;
                hour++;
                if (hour == 24) {
                    hour = 0;
                }
            }
        }
        return *this;
    }
};

int main() {
    // Test Constructors and toString()
    Time t1 = Time(1, 2, 3);
    cout << t1 << endl;  // toString()
    // 03:02:01
    Time t2 = Time();    // The default constructor
    cout << t2 << endl;
    // 00:00:00

    // Test Setters and Getters
    t1.setHour(4);
    t1.setMinute(5);
    t
