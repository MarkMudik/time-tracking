#ifndef INPUT_AND_OUTPUT_H
#define INPUT_AND_OUTPUT_H
#include <string>
#include "Recipient.h"

void printMenu();
void enterRecipientNames(Recipient &x);
void enterRecipientRequiredMinutes(Recipient &x);
void enterDay(Recipient &x);
void viewRecipients(Recipient &x);
void enterRecipientChosen(Recipient &x);
void enterRecipientTimes(Recipient &x);

#endif
