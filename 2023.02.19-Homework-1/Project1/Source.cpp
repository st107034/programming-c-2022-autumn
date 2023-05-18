#include <iostream>

struct Animal 
{
	std::string type;
	std::string name;
	int age;
	
	Animal() 
	{
		type = "";
		name = "";
		age = 0;
	}

	Animal(std::string type, std::string name, int age)
	{
		this->type = type;
		this->name = name;
		this->age = age;
	}

	Animal(const Animal& a)
	{
		type = a.type;
		name = a.name;
		age = a.age;
	}

	~Animal()
	{
	}
};

void printAnimal(Animal a)
{
	std::cout << a.type << std::endl;
	std::cout << a.name << std::endl;
	std::cout << a.age << std::endl;
}

void elderAnimal(Animal &a)
{
	a.age++;
}

int main(int argc, char* argv[])
{
	Animal gibbon("Monkey", "Gibbon", 10);
	printAnimal(gibbon);
	elderAnimal(gibbon);
	printAnimal(gibbon);
}