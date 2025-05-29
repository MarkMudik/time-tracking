#include "Recipient.h"
#include <string>
using namespace std;

Recipient::Recipient() {}
Recipient::Recipient(const string &name, const int requiredMinutes) : name(name), requiredMinutes(requiredMinutes) {}

// setters
void Recipient::setName(const string x) { name = x; }
void Recipient::setRequiredMinutes(const int y) { requiredMinutes = y; }
void Recipient::setChosenRecipient(int z) { chosenRecipient = z; }

// getters
string Recipient::getName() const {
    return name;
}
int Recipient::getRequiredMinutes() const {
    return requiredMinutes;
}

int Recipient::getChosenRecipient() const {
    return chosenRecipient;
}
