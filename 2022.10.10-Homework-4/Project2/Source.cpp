#include <iostream>

int main(int argc, char* argv[])
{
	int bin = 0;
	int dec = 0;
	std::cin >> bin;
	dec = bin % 10;
	bin = bin / 10;
	for (int i = 2; bin > 0; i =i * 2)
	{
		dec += (bin % 10) * i;
		bin = bin / 10;
	}

	std::cout << dec << std::endl;

	return EXIT_SUCCESS;
}