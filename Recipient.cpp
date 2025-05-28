#include "Recipient.h"
#include <iostream>
#include <string>
using namespace std;

Recipient::Recipient() {};
Recipient::Recipient(const string &x, const int y) : name(x), required(y) {}

void Recipient::enterTimes(int arr) {
    string userInput;
    cout << "=== " << name << "===" << endl;
    cout << "Start time: ";
    do {
        cin >> userInput;
    } while (userInput.length() != 5);

    string hoursStr = userInput.substr(0, 2);
    string minutesStr = userInput.substr(3, 2);

    setStartHour(arr, stoi(hoursStr));
    setStartMinute(arr, stoi(minutesStr));

    cout << "End time: ";

    do {
        cin >> userInput;
    } while (userInput.length() != 5);

    hoursStr = userInput.substr(0, 2);
    minutesStr = userInput.substr(3, 2);

    setEndHour(arr, stoi(hoursStr));
    setEndMinute(arr, stoi(minutesStr));

    setDuration(arr, getStartHour(arr), getStartMinute(arr), getEndHour(arr), getEndMinute(arr));
}

// setters
void Recipient::setName(const string x) { name = x; };
void Recipient::setMinutesNeeded(const int y) { required = y; };

// getters
string Recipient::getName() const {
    return name;
}
int Recipient::getMinutesNeeded() const {
    return required;
}
