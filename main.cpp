#include "inputAndOutput.h"
#include <iostream>
#include <vector>

struct UserInput {
    int recipientAmount;
    int recipientChosen;
    int menu = 1;
    int chosenDay;
};

int main() {

    UserInput userInput;

    userInput.recipientAmount = enterRecipientAmount();
    std::vector<Recipient> recipient(userInput.recipientAmount);
    enterRecipientNameAndRequiredMinutes(recipient);


    do {
        printMenu();
        std::cin >> userInput.menu;

        switch (userInput.menu) {
            case 1:
                userInput.recipientChosen = chooseRecipient(recipient);
                userInput.chosenDay = chooseDay();
                enterRecipientTimes(userInput.chosenDay, userInput.recipientChosen, recipient);
                break;
            case 2:
                printCalendar(recipient);
                printMenu();
                std::cin >> userInput.menu;
                break;
            default:
                userInput.menu = 0;
                std::cout << "Exiting ...";
                break;
        }
    } while (userInput.menu != 0);
    return 0;
}

