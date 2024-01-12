#include "Bird.h"
#include <iostream>

using namespace std;

// Default constructor
Bird::Bird() : Animal(), wingspan(0.0) {}

// Parameterized constructor
Bird::Bird(const string& name, const string& color, const string& diet,
           const string& habitat, const string& sounds, bool isPet,
           int age, double weight, double height, double wingspan)
        : Animal(name, color, diet, habitat, sounds, isPet, age, weight, height), wingspan(wingspan) {}

// Copy constructor
Bird::Bird(const Bird& other) : Animal(other), wingspan(other.wingspan) {}

// Setter
void Bird::setWingspan(double wingspan) {
    this->wingspan = wingspan;
}

// Getter
double Bird::getWingspan() const {
    return wingspan;
}

// Overridden printInfo function implementation
void Bird::printInfo() const {
    cout << "Animal of type Bird:" << endl;
    cout << "Name: " << getName() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "Wingspan: " << wingspan << endl;
    cout << "Diet: " << getDiet() << endl;
    cout << "Habitat: " << getHabitat() << endl;
    cout << "Age: " << getAge() << "'s old" << endl;
    cout << "This animal is " << (getIsPet() ? "" : "not ") << "a pet" << endl;
    cout << "Weight: " << getWeight() << "kg" << endl;
    cout << "Height: " << getHeight() << "cm" << endl;
}

// Destructor implementation
Bird::~Bird() {
}

