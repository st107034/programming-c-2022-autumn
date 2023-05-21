#include <iostream>
#include <ctime>
#include "Animal.h"

void tournament(Animal** animals);

int main(int argc, char* argv[])
{
    srand(time(0));

    std::string names[12] = { "Bulbasaur", "Sceptile", "Oddish", "Bellsprout","Vulpix","Charizard","Magmar","Moltres","Blastoise","Vaporeon","Lapras","Mudkip" };
    std::string types[3] = { "Grass", "Fire", "Water" };

    Animal** animals = new Animal * [100];

    for (int i = 0; i < 100; i++)
    {
        animals[i] = new Animal();
        animals[i]->setName(names[rand() % 12]);
        animals[i]->setType(types[rand() % 3]);
        animals[i]->setPower(rand() % 100 + 1);
    }

    std::cout << "Rules" << std::endl;
    std::cout << "1. King of the Hill" << std::endl;
    std::cout << "2. Fire beats grass" << std::endl;
    std::cout << "3. Grass beats water" << std::endl;
    std::cout << "4. Water beats fire" << std::endl;
    std::cout << "5. If type1 == type 2 then winner is which more powerfull" << std::endl;
    std::cout << "6.Otherwise winner is the first - attacker" << std::endl;
    std::cout << std::endl;

    std::cout << "Pokemon roster" << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < 100; i++)
    {
        std::cout << i + 1 << " ";
        animals[i]->printInfo();
    }

    tournament(animals);

}

void tournament(Animal** animals)
{
    int nwinner = 0;

    for (int i = 1; i < 100; i++)
    {
        std::cout << i << ". random encounter" << std::endl;
        animals[nwinner]->printInfo();
        std::cout << " vs " << std::endl;
        animals[i]->printInfo();

        if (animals[nwinner]->getType() == "Grass" and animals[i]->getType() == "Water")
        {
            delete animals[i];
            animals[nwinner]->mighter();
        }
        else if (animals[nwinner]->getType() == "Water" and animals[i]->getType() == "Fire")
        {
            delete animals[i];
            animals[nwinner]->mighter();
        }
        else if (animals[nwinner]->getType() == "Fire" and animals[i]->getType() == "Grass")
        {
            delete animals[i];
            animals[nwinner]->mighter();
        }
        else if (animals[nwinner]->getType() == "Grass" and animals[i]->getType() == "Fire")
        {
            delete animals[nwinner];
            nwinner = i;
            animals[i]->mighter();
        }
        else if (animals[nwinner]->getType() == "Water" and animals[i]->getType() == "Grass")
        {
            delete animals[nwinner];
            nwinner = i;
            animals[i]->mighter();
        }
        else if (animals[nwinner]->getType() == "Fire" and animals[i]->getType() == "Water")
        {
            delete animals[nwinner];
            nwinner = i;
            animals[i]->mighter();
        }
        else if (animals[nwinner]->getPower() < animals[i]->getPower())
        {
            delete animals[nwinner];
            nwinner = i;
            animals[i]->mighter();
        }
        else
        {
            delete animals[i];
            animals[nwinner]->mighter();
        }
        std::cout << "The winner of the " << i << ". round is ";
        animals[nwinner]->printInfo();
    }
    std::cout << std::endl;
    std::cout << "The winner is ";
    animals[nwinner]->printInfo();
}