#ifndef INPUT_AND_OUTPUT_H
#define INPUT_AND_OUTPUT_H
#include "Recipient.h"
#include <vector>

void printMenu();
int enterRecipientAmount();
void enterRecipientNameAndRequiredMinutes(std::vector<Recipient>& recipient);
int chooseRecipient(const std::vector<Recipient>& recipient);
int chooseDay();
void enterRecipientTimes(int arr, int day, std::vector<Recipient>& recipient);
void printCalendar(std::vector<Recipient> &recipient);

#endif
