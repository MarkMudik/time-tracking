#include "Recipient.h"
#include <iostream>
#include <string>
using namespace std;

Recipient::Recipient(const string &x, const int y) : name(x), required(y) {}
Recipient::Recipient() {};

void Recipient::enterTimes() {
    string userInput;
    cout << "=== " << name << "===" << endl;
    cout << "Start time: ";
    do {
        cin >> userInput;
    } while (userInput.length() != 4);

    string hoursStr = userInput.substr(0, 2);
    string minutesStr = userInput.substr(2, 2);

    setStartHour(stoi(hoursStr));
    setStartMinute(stoi(minutesStr));

    cout << "End time: ";

    do {
        cin >> userInput;
    } while (userInput.length() != 4);

    hoursStr = userInput.substr(0, 2);
    minutesStr = userInput.substr(2, 2);

    setEndHour(stoi(hoursStr));
    setEndMinute(stoi(minutesStr));

    setDuration(getStartHour(), getStartMinute(), getEndHour(), getEndMinute());
}

void Recipient::setName(const string x) { name = x; };
void Recipient::setMinutesNeeded(const int y) { required = y; };

string Recipient::getName() const {
    return name;
}
int Recipient::getMinutesNeeded() const {
    return required;
}
