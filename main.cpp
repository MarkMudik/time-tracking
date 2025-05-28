#include "Recipient.h"
#include <iostream>
using namespace std;


void printMenu();

int main() {

    string userInputStr;
    int userInputInt;
    // if want to make it interactive in cmd, make a default constructor that doesnt have parameters
    Recipient recipient[2] = { Recipient("Nad", 3982), Recipient("Myk", 4246) };

    printMenu();

    return 0;
}

void printMenu() {
    cout << "(1) Enter time" << endl;
    cout << "(2) Calendar" << endl;
    cout << ": ";
}
