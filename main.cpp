#include "Recipient.h"
#include <iostream>
using namespace std;


void printMenu();

int main() {

    // if want to make it interactive in cmd, make a default constructor that doesnt have parameters
    Recipient recipient[2] = { Recipient("Nad", 3982), Recipient("Myk", 4246) };

    recipient[0].enterTimes();
    recipient[1].enterTimes();

    cout << "Duration for " << recipient[0].getName() << ": " << recipient[0].getDuration() << endl;
    cout << "Duration for " << recipient[1].getName() << ": " << recipient[1].getDuration() << endl;

    return 0;
}

void printMenu() {
    cout << "(1) Enter time" << endl;
    cout << "(2) Calendar" << endl;
    cout << ": ";
}
