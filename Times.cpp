#include "Times.h"
#include <iostream>

Times::Times() {
    for (int i = 0; i < 31; i++) {
        day[i] = 0;
        startHour[i] = 0;
        startMinute[i] = 0;
        endHour[i] = 0;
        endMinute[i] = 0;
    }
}

void Times::setDay(int arr, int x) { if (x >= 1 && x <= 31) { day[arr] = x; } else { day[arr] = 1; std::cout << "Error\n"; } }
void Times::setStartHour(int arr, int x) { if (x >= 0 && x <= 23) { startHour[arr] = x; } else { startHour[arr] = 0; std::cout << "Error\n"; } }
void Times::setEndHour(int arr, int x) { if (x >= 0 && x <= 23) { endHour[arr] = x; } else { endHour[arr] = 0; std::cout << "Error\n"; } }
void Times::setStartMinute(int arr, int x) { if (x >= 0 && x <= 59) { startMinute[arr] = x; } else { startMinute[arr] = 0; std::cout << "Error\n"; } }
void Times::setEndMinute(int arr, int x) { if (x >= 0 && x <= 59) { endMinute[arr] = x; } else { endMinute[arr] = 0; std::cout << "Error\n"; } }

void Times::setDuration(int arr, int startHour, int startMinute, int endHour, int endMinute) {
    // convert to minutes
    int startTotal, endTotal;
    startTotal = ((startHour * 60) + startMinute);
    endTotal = ((endHour * 60) + endMinute);
    // calculation
    if ((endTotal - startTotal) < 0) {
        std::cout << "Duration is negative" << std::endl;
        duration[arr] = 0;
    } else {
        duration[arr] = endTotal - startTotal;
    }
}

int Times::getDay(int arr) const {
    return day[arr];
}

int Times::getStartHour(int arr) const {
    return startHour[arr];
}

int Times::getStartMinute(int arr) const {
    return startMinute[arr];
}

int Times::getEndHour(int arr) const {
    return endHour[arr];
}

int Times::getEndMinute(int arr) const {
    return endMinute[arr];
}


int Times::getDuration(int arr) const {
    return duration[arr];
}
