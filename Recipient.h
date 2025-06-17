#ifndef RECIPIENT_H
#define RECIPIENT_H
#include <fstream>
#include <string>

class Recipient {
public:
    // constructors
    Recipient();

    // setters
    void setName(const std::string newName);
    void setRequired(const int x);

    // getters
    const std::string getName() const;
    int getRequired() const;

    // file
    void writeToFile(std::ofstream& out) const;
    void readToFile(std::ifstream& in);
private:
    std::string name;
    int required;
};

#endif
