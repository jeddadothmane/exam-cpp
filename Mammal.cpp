#include "Mammal.h"
#include <iostream>

using namespace std;

// Default constructor
Mammal::Mammal() : Animal(), furColor("Unknown") {}

// Parameterized constructor
Mammal::Mammal(const string& name, const string& color, const string& diet,
               const string& habitat, const string& sounds, bool isPet,
               int age, double weight, double height, const string& furColor)
        : Animal(name, color, diet, habitat, sounds, isPet, age, weight, height), furColor(furColor) {}

// Copy constructor
Mammal::Mammal(const Mammal& other) : Animal(other), furColor(other.furColor) {}

// Setter
void Mammal::setFurColor(const string& furColor) {
    this->furColor = furColor;
}

// Getter
string Mammal::getFurColor() const {
    return furColor;
}

void Mammal::printInfo() const {
    cout << "Animal of type Mammal:" << endl;
    cout << "Name: " << getName() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "Fur Color: " << furColor << endl;
    cout << "Diet: " << getDiet() << endl;
    cout << "Habitat: " << getHabitat() << endl;
    cout << "Age: " << getAge() << "'s old" << endl;
    cout << "This animal is " << (getIsPet() ? "" : "not ") << "a pet" << endl;
    cout << "Weight: " << getWeight() << "kg" << endl;
    cout << "Height: " << getHeight() << "cm" << endl;
}

// Destructor
Mammal::~Mammal() {
}

