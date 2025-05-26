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

void Times::setMonth(int x) {
    if (x > 1 && x < 12) {
        month = x;
    } else {
        month = 1;
        std::cout << "Error in month setter" << std::endl;
    }
}

void Times::setDay(int x) {
    if (x > 1 && x < 31) {
        day = x;
    } else {
        day = 1;
        std::cout << "Error in day setter" << std::endl;
    }
}

void Times::setStartHour(int x) {
    if (x > 1 && x <= 24) {
        startHour = x;
    } else {
        startHour = 1;
        std::cout << "Error in startHour setter" << std::endl;
    }
}

void Times::setStartMinute(int x) {
    if (x >= 0 && x <= 60) {
        startMinute = x;
    } else {
        startMinute = 0;
        std::cout << "Error in startMinute setter" << std::endl;
    }
}

void Times::setEndHour(int x) {
    if (x > 1 && x <= 24) {
        endHour = x;
    } else {
        endHour = 1;
        std::cout << "Error in endHour setter" << std::endl;
    }
}

void Times::setEndMinute(int x) {
    if (x >= 0 && x <= 60) {
        endMinute = x;
    } else {
        endMinute = 0;
        std::cout << "Error in endMinute setter" << std::endl;
    }
}

void Times::setDuration(int startMinute, int startHour, int endHour, int endMinute) {

    // convert to minutes
    int startTotal, endTotal;
    startTotal = ((startHour * 60) + startMinute);
    endTotal = ((endHour * 60) + endMinute);
    // calculation
    duration = endTotal - startTotal;
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
