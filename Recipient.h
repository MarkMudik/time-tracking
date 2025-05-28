#ifndef RECIPIENT_H
#define RECIPIENT_H
#include "Times.h"
#include <string>
using namespace std;

class Recipient : public Times {
public:
    // constructors
    Recipient();
    Recipient(const string &x, const int y);
    void enterTimes(int arr);
    // setters
    void setName(const string x);
    void setMinutesNeeded(const int y);
    // getters
    string getName() const;
    int getMinutesNeeded() const;
    void printFormattedDay(int x);
private:
    string name;
    int required;
};

#endif
