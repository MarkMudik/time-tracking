#ifndef RECIPIENT_H
#define RECIPIENT_H
#include "Time.h"
#include <string>
using namespace std;

class Recipient : public Time {
public:
    // constructors
    Recipient();
    Recipient(const string &x, const int y);
    // setters
    void setName(const string x);
    void setRequiredMinutes(const int y);
    void setChosenRecipient(int z);
    // getters
    string getName() const;
    int getRequiredMinutes() const;
    int getChosenRecipient() const;
private:
    string name;
    int requiredMinutes;
    int chosenRecipient;
};

#endif
