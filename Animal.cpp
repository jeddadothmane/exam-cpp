#include "Animal.h"
#include <iostream>

using namespace std;

// Default constructor
Animal::Animal() : name("Unknown"), color("Unknown"), diet("Unknown"), habitat("Unknown"),
                   sounds("Unknown"), isPet(false), age(0), weight(0.0), height(0.0) {}

// Parameterized constructor
Animal::Animal(const string& name, const string& color, const string& diet,
               const string& habitat, const string& sounds, bool isPet,
               int age, double weight, double height)
        : name(name), color(color), diet(diet), habitat(habitat), sounds(sounds), isPet(isPet),
          age(age), weight(weight), height(height) {}

// Copy constructor
Animal::Animal(const Animal& other) : name(other.name), color(other.color), diet(other.diet),
                                      habitat(other.habitat), sounds(other.sounds), isPet(other.isPet),
                                      age(other.age), weight(other.weight), height(other.height) {}

// Setters
void Animal::setName(const string& name) {
    this->name = name;
}
void Animal::setColor(const string& color) {
    this->color = color;
}
void Animal::setDiet(const string &diet) {
    Animal::diet = diet;
}
void Animal::setHabitat(const string &habitat) {
    Animal::habitat = habitat;
}
void Animal::setSounds(const string &sounds) {
    Animal::sounds = sounds;
}
void Animal::setIsPet(bool isPet) {
    Animal::isPet = isPet;
}
void Animal::setAge(int age) {
    Animal::age = age;
}
void Animal::setWeight(double weight) {
    Animal::weight = weight;
}
void Animal::setHeight(double height) {
    Animal::height = height;
}

// Getters implementation
string Animal::getName() const {
    return name;
}
string Animal::getColor() const {
    return color;
}
const string &Animal::getDiet() const {
    return diet;
}
const string &Animal::getHabitat() const {
    return habitat;
}
const string &Animal::getSounds() const {
    return sounds;
}
bool Animal::getIsPet() const {
    return isPet;
}
int Animal::getAge() const {
    return age;
}
double Animal::getWeight() const {
    return weight;
}
double Animal::getHeight() const {
    return height;
}

// makeSound implementation
void Animal::makeSound() const {
    cout << sounds << endl;
}

void Animal::printInfo() const {
    cout << "Animal of unknown type:" << endl;
    cout << "Name: " << name << endl;
    cout << "Color: " << color << endl;
    cout << "Diet: " << diet << endl;
    cout << "Habitat: " << habitat << endl;
    cout << "Age: " << age << "'s old" << endl;
    cout << "This animal is " << (isPet ? "" : "not ") << "a pet" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Height: " << height << " cm" << endl;
}

// Destructor implementation
Animal::~Animal() {
}



