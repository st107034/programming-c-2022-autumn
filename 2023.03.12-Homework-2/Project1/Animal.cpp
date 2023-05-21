#include "Animal.h"

Animal::~Animal()
{
}

void Animal::printInfo()
{
    std::cout << "Name: " << name << " Type: " << type << " Power: " << power << std::endl;
}

void Animal::mighter()
{
    power+=10;
}

std::string Animal::getName()
{
    return name;
}
std::string Animal::getType()
{
    return type;
}
int Animal::getPower()
{
    return power;
}

void Animal::setName(std::string name)
{
    this->name = name;
}
void Animal::setType(std::string type)
{
    this->type = type;
}
void Animal::setPower(int power)
{
    if (power > 0)
    {
        this->power = power;
    }
}