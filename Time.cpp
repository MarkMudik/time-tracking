#include "Time.h"
#include <iostream>
using namespace std;

Time::Time() {
    day = 0;
    for (int i = 0; i < 31; i++) {
        startHour[i] = 0;
        startMinute[i] = 0;
        endHour[i] = 0;
        endMinute[i] = 0;
    }
}

void Time::setDay(int x) { if (x >= 0 && x <= 31) { day = x; } else { day = 0; cout << "Error\n"; } }
void Time::setStartHour(int arr, int x) { if (x >= 0 && x <= 23) { startHour[arr] = x; } else { startHour[arr] = 0; cout << "Error\n"; } }
void Time::setStartMinute(int arr, int x) { if (x >= 0 && x <= 59) { startMinute[arr] = x; } else { startMinute[arr] = 0; cout << "Error\n"; } }
void Time::setEndHour(int arr, int x) { if (x >= 0 && x <= 23) { endHour[arr] = x; } else { endHour[arr] = 0; cout << "Error\n"; } }
void Time::setEndMinute(int arr, int x) { if (x >= 0 && x <= 59) { endMinute[arr] = x; } else { endMinute[arr] = 0; cout << "Error\n"; } }

void Time::setDuration(int arr, int startHour, int startMinute, int endHour, int endMinute) {
    // convert to minutes
    int startTotal, endTotal;
    startTotal = ((startHour * 60) + startMinute);
    endTotal = ((endHour * 60) + endMinute);
    // calculation
    if ((endTotal - startTotal) < 0) {
        cout << "Duration is negative" << endl;
        duration[arr] = 0;
    } else {
        duration[arr] = endTotal - startTotal;
    }
}

int Time::getDay() const {
    return day;
}

int Time::getStartHour(int arr) const {
    return startHour[arr];
}

int Time::getStartMinute(int arr) const {
    return startMinute[arr];
}

int Time::getEndHour(int arr) const {
    return endHour[arr];
}

int Time::getEndMinute(int arr) const {
    return endMinute[arr];
}


int Time::getDuration(int arr) const {
    return duration[arr];
}
