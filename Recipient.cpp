#include "Recipient.h"
#include <fstream>
#include <string>


// constructors
Recipient::Recipient() {}

// setters
void Recipient::setName(const std::string newName) { name = newName; }
void Recipient::setRequired(const int x) { required = x; }

// getters
const std::string Recipient::getName() const { return name; }
int Recipient::getRequired() const { return required; }
