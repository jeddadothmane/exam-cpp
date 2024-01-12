#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"
#include <string>

using namespace std;

class Mammal : public Animal {
private:
    string furColor;

public:
    // Default constructor
    Mammal();

    // Parameterized constructor
    Mammal(const string& name, const string& color, const string& diet,
           const string& habitat, const string& sounds, bool isPet,
           int age, double weight, double height, const string& furColor);

    // Copy constructor
    Mammal(const Mammal& other);

    // Setters
    void setFurColor(const string& furColor);

    // Getters
    string getFurColor() const;

    // Overridden printInfo function
    virtual void printInfo() const override;

    // Destructor
    virtual ~Mammal();
};

#endif
