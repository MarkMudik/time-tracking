#include "inputAndOutput.h"
#include <iostream>
#include <vector>

// (1) number of recipients
// (2) names of recipients
// (3) required minutes of recipients
// (4) day
// (5) start time / end time

// calling printMenu
void printMenu() {
    cout << "(1) Enter Recipient Information" << endl;
    cout << "(2) View Calendar" << endl;
    cout << "(0) Exit" << endl;
}

// calling to get the amount of recipients
int enterRecipientAmount() {
    int x;
    std::cout << "Number of Recipients: ";
    std::cin >> x;
    return x;
}

// getting names and required minutes for recipients
void enterRecipientNameAndRequiredMinutes(std::vector<Recipient>& recipient) {
    string name;
    int requiredMinutes;

    for (size_t i = 0; i < recipient.size(); i++) {
        std::cout << "Recipient " << i+1 << " name: ";
        cin >> name;
        std::cout << "Recipient " << i+1 << " required minutes: ";
        cin >> requiredMinutes;

        recipient[i].setName(name);
        recipient[i].setRequiredMinutes(requiredMinutes);
    }
}

int chooseRecipient(const std::vector<Recipient>& recipient) {
    int x;
    std::cout << "Recipients" << endl;
    for (size_t i = 0; i < recipient.size(); i++) {
        std::cout << "(" << i+1 << "): " << recipient[i].getName() << std::endl;
    }
    std::cout << "Choose recipient: ";
    cin >> x;
    return (x-1);
}

int chooseDay() {
    int x;
    cout << "Enter day: ";
    cin >> x;
    return (x-1);
}

void enterRecipientTimes(int arr, int day, std::vector<Recipient>& recipient) {
    // day, start time, end time
    int a;
    cout << "Start hour: ";
    cin >> a;
    recipient[arr].setStartHour(day, a);
    cout << "Start minute: ";
    cin >> a;
    recipient[arr].setStartMinute(day, a);

    cout << "End hour: ";
    cin >> a;
    recipient[arr].setEndHour(day, a);
    cout << "End minute: ";
    cin >> a;
    recipient[arr].setEndMinute(day, a);;
    recipient[arr].setDuration(day);
}

// set duration with class function setDuration

void printCalendar(std::vector<Recipient>& recipient) {
    for (size_t i = 0; i < recipient.size(); i++) {
        cout << "For: " << recipient[i].getName() << endl;
        for (size_t t = 0; t < 31; t++) {
            if (recipient[i].getStartHour(t) > 0) {
                cout << "Day " << t+1 << endl;
                cout << "Start time: " << recipient[i].getStartHour(t) << ":" << recipient[i].getStartMinute(t) << endl;
                cout << "End time: " << recipient[i].getEndHour(t) << ":" << recipient[i].getEndMinute(t) << endl;
                cout << "Duration: " << recipient[i].getDuration(t) << endl;
            }
        }
    }
}
