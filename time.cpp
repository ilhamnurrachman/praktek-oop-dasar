#include <iostream>
#include <iomanip>

using namespace std;

class Time {
private:
    int second, minute, hour;

public:
    Time(int second, int minute, int hour) : second(second), minute(minute), hour(hour) {}

    Time() : second(0), minute(0), hour(0) {}

    int getSecond() {
        return second;
    }

    int getMinute() {
        return minute;
    }

    int getHour() {
        return hour;
    }

    void setSecond(int second) {
        this->second = second;
    }

    void setMinute(int minute) {
        this->minute = minute;
    }

    void setHour(int hour) {
        this->hour = hour;
    }

    string toString() {
        return to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
    }

    void setTime(int second, int minute, int hour) {
        this->second = second;
        this->minute = minute;
        this->hour = hour;
    }

    Time& nextSecond() {
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
        return *this;
    }
};

int main() {
    Time t1(30, 45, 10);
    cout << t1.toString() << endl;
    //10:45:30

    t1.setSecond(15);
    t1.setMinute(20);
    t1.setHour(5);
    cout << t1.toString() << endl;
    //5:20:15

    t1.setTime(45, 59, 23);
    cout << t1.toString() << endl;
    //23:59:45

    t1.nextSecond();
    cout << t1.toString() << endl;
    //23:59:46

    t1.nextSecond().nextSecond();
    cout << t1.toString() << endl;
    //23:59:48

    return 0;
}
