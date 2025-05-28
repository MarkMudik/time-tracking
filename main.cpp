#include "Recipient.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;


void printMenu();
void enterDate(Recipient &nad, Recipient &myk);
void enterTimes(Recipient &nad, Recipient &myk);

int main() {

    Recipient nad("Nad", 3982);
    Recipient myk("Myk", 4246);

    // menu and interaction (make seperate functions at some point
    printMenu();
    int userInput;
    cin >> userInput;
    switch (userInput) {
        case 1:
            enterDate(nad, myk);
            enterTimes(nad, myk);
            break;
        default:
            cout << "Implement calendar" << endl;
            break;
    }

    return 0;
}

void printMenu() {
    cout << "(1) Enter time" << endl;
    cout << "(2) Calendar" << endl;
    cout << ": ";
}

// TODO can put this into the Recipient class at some point
void enterDate(Recipient &nad, Recipient &myk) {
    int* userInput = new int[4];
    cout << "day: ";
    do {
        cin >> *userInput;
    } while (cin.fail());

    nad.setDay(*userInput);
    myk.setDay(*userInput);
    delete[] userInput;
}

void enterTimes(Recipient &nad, Recipient &myk) {
    string userInput;

    cout << "=== Nad ===" << endl;
    cout << "Start time: ";
    do {
        cin >> userInput;
    } while (userInput.length() != 4);

    string hoursStr = userInput.substr(0, 2);
    string minutesStr = userInput.substr(2, 2);

    nad.setStartHour(stoi(hoursStr));
    nad.setStartMinute(stoi(minutesStr));

    cout << "End time: ";
    do {
        cin >> userInput;
    } while (userInput.length() != 4);

    hoursStr = userInput.substr(0, 2);
    minutesStr = userInput.substr(2, 2);

    nad.setEndHour(stoi(hoursStr));
    nad.setEndMinute(stoi(minutesStr));

    cout << "=== Myk ===" << endl;
    cout << "Start time: ";
    do {
        cin >> userInput;
    } while (userInput.length() != 4);

    hoursStr = userInput.substr(0, 2);
    minutesStr = userInput.substr(2, 2);

    myk.setStartHour(stoi(hoursStr));
    myk.setStartMinute(stoi(minutesStr));

    cout << "End time: ";
    do {
        cin >> userInput;
    } while (userInput.length() != 4);

    hoursStr = userInput.substr(0, 2);
    minutesStr = userInput.substr(2, 2);

    myk.setEndHour(stoi(hoursStr));
    myk.setEndMinute(stoi(minutesStr));

    nad.setDuration(nad.getStartHour(), nad.getStartMinute(), nad.getEndHour(), nad.getEndMinute());
    myk.setDuration(myk.getStartHour(), myk.getStartMinute(), myk.getEndHour(), myk.getEndMinute());
}
