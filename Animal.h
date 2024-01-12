#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

class Animal {
private:
    string name;
    string color;
    string diet;
    string habitat;
    string sounds;
    bool isPet;
    int age;
    double weight;
    double height;

public:
    // Default constructor
    Animal();

    // Parameterized constructor
    Animal(const string& name, const string& color, const string& diet,
           const string& habitat, const string& sounds, bool isPet,
           int age, double weight, double height);

    // Copy constructor
    Animal(const Animal& other);

    // Setters
    void setName(const string& name);
    void setColor(const string& color);
    void setDiet(const string &diet);
    void setHabitat(const string &habitat);
    void setSounds(const string &sounds);
    void setIsPet(bool isPet);
    void setAge(int age);
    void setWeight(double weight);
    void setHeight(double height);

    // Getters
    string getName() const;
    string getColor() const;
    const string &getDiet() const;
    const string &getHabitat() const;
    const string &getSounds() const;
    bool getIsPet() const;
    int getAge() const;
    double getWeight() const;
    double getHeight() const;

    void makeSound() const;

    virtual void printInfo() const;

    //destructor
    virtual ~Animal();
};

#endif
