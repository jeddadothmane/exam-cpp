#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"
#include <string>

using namespace std;

class Bird : public Animal {
private:
    double wingspan;

public:
    // Default constructor
    Bird();

    // Parameterized constructor
    Bird(const string& name, const string& color, const string& diet,
         const string& habitat, const string& sounds, bool isPet,
         int age, double weight, double height, double wingspan);

    // Copy constructor
    Bird(const Bird& other);

    // Setters
    void setWingspan(double wingspan);

    // Getters
    double getWingspan() const;

    // Overridden printInfo function
    virtual void printInfo() const override;

    // Destructor
    virtual ~Bird();
};

#endif // BIRD_H
