#include <iostream>
#include "inputAndOutput.h"
using namespace std;

void printMenu() {
    cout << "(1) Enter Information" << endl;
    cout << "(2) View Calendar" << endl;
    cout << "(0) Exit" << endl;
}

void enterRecipientNames(Recipient &x) {
    string name;
    cout << "Recipient Name: ";
    cin >> name;
    x.setName(name);
}

void enterRecipientRequiredMinutes(Recipient &x) {
    int minutes;
    cout << "Recipient Required Minutes: ";
    cin >> minutes;
    x.setRequiredMinutes(minutes);
}

void enterDay(Recipient &x) {
    int a;
    cout << "Enter day: ";
    cin >> a;
    x.setDay(a-1);
}

void enterRecipientChosen(Recipient &x) {
    int a;
    cout << "Enter chosen recipient: ";
    cin >> a;
    x.setChosenRecipient(a-1);
}


