#include<iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    bool operator==(const Time& other) {
        return (hours == other.hours && minutes == other.minutes && seconds == other.seconds);
    }

    friend ostream& operator<<(ostream& os, const Time& time) {
        os << time.hours << "h " << time.minutes << "m " << time.seconds << "s";
        return os;
    }

    friend istream& operator>>(istream& is, Time& time) {
        is >> time.hours >> time.minutes >> time.seconds;
        return is;
    }
};

int main() {
    Time t1, t2;
    cout << "Enter time t1 (hh mm ss): ";
    cin >> t1;
    cout << "Enter time t2 (hh mm ss): ";
    cin >> t2;

    if (t1 == t2) {
        cout << "The times are the same." << endl;
    } else {
        cout << "The times are different." << endl;
    }

    cout << "Time t1: " << t1 << endl;
    cout << "Time t2: " << t2 << endl;

    return 0;
}
