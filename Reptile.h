#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"
#include <string>

using namespace std;

class Reptile : public Animal {
private:
    string scalePattern;

public:
    // Default constructor
    Reptile();

    // Parameterized constructor
    Reptile(const string& name, const string& color, const string& diet,
            const string& habitat, const string& sounds, bool isPet,
            int age, double weight, double height, const string& scalePattern);

    // Copy constructor
    Reptile(const Reptile& other);

    // Setter
    void setScalePattern(const string& scalePattern);

    // Getter
    string getScalePattern() const;

    virtual void printInfo() const override;

    // Destructor
    virtual ~Reptile();
};

#endif // REPTILE_H
