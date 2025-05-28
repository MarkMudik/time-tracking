#include "Times.h"
#include <iostream>

Times::Times() {
    month = 0;
    day = 0;
    startHour = 0;
    startMinute = 0;
    endHour = 0;
    endMinute = 0;
}

void Times::setDay(int x) { if (x >= 1 && x <= 31) { day = x; } else { day = 1; std::cout << "Error\n"; } }
void Times::setStartHour(int x) { if (x >= 0 && x <= 23) { startHour = x; } else { startHour = 0; std::cout << "Error\n"; } }
void Times::setEndHour(int x) { if (x >= 0 && x <= 23) { endHour = x; } else { endHour = 0; std::cout << "Error\n"; } }
void Times::setStartMinute(int x) { if (x >= 0 && x <= 59) { startMinute = x; } else { startMinute = 0; std::cout << "Error\n"; } }
void Times::setEndMinute(int x) { if (x >= 0 && x <= 59) { endMinute = x; } else { endMinute = 0; std::cout << "Error\n"; } }

void Times::setDuration(int startHour, int startMinute, int endHour, int endMinute) {
    // convert to minutes
    int startTotal, endTotal;
    startTotal = ((startHour * 60) + startMinute);
    endTotal = ((endHour * 60) + endMinute);
    // calculation
    if ((endTotal - startTotal) < 0) {
        std::cout << "Duration is negative" << std::endl;
        duration = 0;
    } else {
        duration = endTotal - startTotal;
    }
}

int Times::getMonth() const {
    return month;
}

int Times::getDay() const {
    return day;
}

int Times::getStartHour() const {
    return startHour;
}

int Times::getStartMinute() const {
    return startMinute;
}

int Times::getEndHour() const {
    return endHour;
}

int Times::getEndMinute() const {
    return endMinute;
}


int Times::getDuration() const {
    return duration;
}
