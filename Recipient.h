#ifndef RECIPIENT_H
#define RECIPIENT_H
#include <string>

class Recipient {
public:
    // constructors
    Recipient();

    // setters
    void setName(const std::string x);
    void setRequiredMinutes(const int y);

    // getters
    std::string getName() const;
    int getRequiredMinutes() const;
private:
    int requiredMinutes = 0;
    std::string name = "";
};

#endif
