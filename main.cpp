#include "Recipient.h"
#include <iostream>
using namespace std;

void printMenu();
struct UserInput {
    int menu, day, recipient;
};

int main() {

    // if want to make it interactive in cmd, make a default constructor that doesnt have parameters
    Recipient recipient[2] = { Recipient("Nad", 3982), Recipient("Myk", 4246) };
    UserInput userInput;

    do {
        printMenu();
        cin >> userInput.menu;
        if (userInput.menu ==  1)
        {
            cout << "Day: ";
            cin >> userInput.day;
            userInput.day--;
            // get recipient
            cout << "Choose Recipient " << endl;
            for (int i = 0; i < 2; i++) {
                cout << "(" << i+1 << "): " << recipient[i].getName() << endl;
            }
            cin >> userInput.recipient;
            userInput.recipient--;
            recipient[userInput.recipient].enterTimes(userInput.day);
        } else if (userInput.menu == 2) {
            cout << "Which Recipient: ";
            cin >> userInput.recipient;
            userInput.recipient--;
            // print formatted
            for (int i = 0; i < 31; i++) {
                recipient[userInput.recipient].printFormattedDay(i);
            }
        }
    } while (userInput.menu != 0);

    return 0;
}

void printMenu() {
    cout << "(1) Enter time" << endl;
    cout << "(2) Calendar" << endl;
    cout << "(0) Exit" << endl;
}
