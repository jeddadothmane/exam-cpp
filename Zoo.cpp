#include "Zoo.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "KNNString.h"
#include "KNNDouble.h"
#include <algorithm>
#include <iostream>

using namespace std;

const int Zoo::MAX_CAPACITY = 99999;

// Default constructor
Zoo::Zoo() : name("Unnamed Zoo") {}

// Parameterized constructor
Zoo::Zoo(const string& name) : name(name) {}

// Copy constructor
Zoo::Zoo(const Zoo& other) : name(other.name), animals(other.animals) {}

// Destructor
Zoo::~Zoo() {
    for (Animal* animal : animals) {
        delete animal;
    }
}

// Setters and Getters
void Zoo::setName(const string& name) {
    this->name = name;
}

string Zoo::getName() const {
    return name;
}

// Member functions
void Zoo::listAnimals() const {
    for (const Animal* animal : animals) {
        animal->printInfo();
    }
}

bool Zoo::addAnimal(Animal* animal) {
    if (animals.size() < MAX_CAPACITY) {
        auto it = lower_bound(animals.begin(), animals.end(), animal,
                                   [](const Animal* a, const Animal* b) {
                                       return a->getName() < b->getName();
                                   });
        animals.insert(it, animal);
        return true;
    }
    return false;
}

int Zoo::searchAnimalByName(const string& name) const {
    auto it = lower_bound(animals.begin(), animals.end(), name,
                               [](const Animal* animal, const string& name) {
                                   return animal->getName() < name;
                               });
    if (it != animals.end() && (*it)->getName() == name) {
        return distance(animals.begin(), it);
    }
    return -1;
}

bool Zoo::removeAnimalByName(const string& name) {
    int index = searchAnimalByName(name);
    if (index != -1) {
        delete animals[index];
        animals.erase(animals.begin() + index);
        return true;
    } else {
        cout << "Animal with name " << name << " does not exist in the Zoo." << endl;
        return false;
    }
}

double Zoo::averageAgeForType(const string& type) const {
    double totalAge = 0.0;
    int count = 0;

    for (const Animal* animal : animals) {
        if (type == "Mammal" && dynamic_cast<const Mammal*>(animal) != nullptr) {
            totalAge += animal->getAge();
            ++count;
        } else if (type == "Bird" && dynamic_cast<const Bird*>(animal) != nullptr) {
            totalAge += animal->getAge();
            ++count;
        } else if (type == "Reptile" && dynamic_cast<const Reptile*>(animal) != nullptr) {
            totalAge += animal->getAge();
            ++count;
        }
    }

    return count == 0 ? 0.0 : totalAge / count;
}

void Zoo::predictTypeWithKNN(const Animal& animal, int k, const string& infoType) {
}

