#pragma once
#include <iostream>

class Animal
{
private:
    std::string name;
    std::string type;
    int power;
public:
    Animal(std::string name = "", std::string type = "", int power = 1) :
        name(name),
        type(type),
        power(power) {}

    Animal(const Animal& an) :
        name(an.name),
        type(an.type),
        power(an.power) {
    }

    ~Animal();

    void printInfo();

    void mighter();

    std::string getName();
    std::string getType();
    int getPower();

    void setName(std::string name);
    void setType(std::string type);
    void setPower(int power);

};
