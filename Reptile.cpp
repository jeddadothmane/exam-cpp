#include "Reptile.h"
#include <iostream>

using namespace std;

// Default constructor implementation
Reptile::Reptile() : Animal(), scalePattern("Unknown") {}

// Parameterized constructor implementation
Reptile::Reptile(const string& name, const string& color,const string& diet,
                 const string& habitat, const string& sounds, bool isPet,
                 int age, double weight, double height, const string& scalePattern)
        : Animal(name, color, diet, habitat, sounds, isPet, age, weight, height), scalePattern(scalePattern) {}

// Copy constructor implementation
Reptile::Reptile(const Reptile& other) : Animal(other), scalePattern(other.scalePattern) {}

// Setter implementation for scalePattern
void Reptile::setScalePattern(const string& scalePattern) {
    this->scalePattern = scalePattern;
}

// Getter implementation for scalePattern
string Reptile::getScalePattern() const {
    return scalePattern;
}

// Overridden printInfo function implementation
void Reptile::printInfo() const {
    cout << "Animal of type Reptile:" << endl;
    cout << "Name: " << getName() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "Scale Pattern: " << scalePattern << endl;
    cout << "Diet: " << getDiet() << endl;
    cout << "Habitat: " << getHabitat() << endl;
    cout << "Age: " << getAge() << "'s old" << endl;
    cout << "This animal is " << (getIsPet() ? "" : "not ") << "a pet" << endl;
    cout << "Weight: " << getWeight() << "kg" << endl;
    cout << "Height: " << getHeight() << "cm" << endl;

}

// Destructor implementation
Reptile::~Reptile() {
}


