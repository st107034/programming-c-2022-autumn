#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;
	int j = 0;
	std::cin >> n;

	do 
	{
		j = j + 1;
		std::cout << (j + i) - 2 * ((j + i > n) * ((j + i) % n)) << " ";

		if (j % n == 0)
		{
			j = 0;
			i = i + 1;
			std::cout << std::endl;
		}
	} while (i < n);

	return EXIT_SUCCESS;
}