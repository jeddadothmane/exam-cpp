#ifndef ZOO_H
#define ZOO_H

#include "Animal.h"
#include <vector>
#include <string>

using namespace std;

class Zoo {
private:
    string name;
    static const int MAX_CAPACITY;
    vector<Animal*> animals;

public:
    // Default constructor
    Zoo();

    // Parameterized constructor
    Zoo(const string& name);

    // Copy constructor
    Zoo(const Zoo& other);

    // Destructor
    ~Zoo();

    // Setters and Getters
    void setName(const string& name);
    string getName() const;

    void listAnimals() const;
    bool addAnimal(Animal* animal);
    int searchAnimalByName(const string& name) const;
    bool removeAnimalByName(const string& name);
    double averageAgeForType(const string& type) const;

    void predictTypeWithKNN(const Animal& animal, int k, const string& infoType);
};

#endif
