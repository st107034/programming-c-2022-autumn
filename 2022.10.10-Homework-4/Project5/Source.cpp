#include <iostream>

int main(int argc, char* argv[])
{
	double n = 0;
	double sum = 1;
	double fact = 1;
	std::cin >> n;

	for (double i = 1; i <= n; i++)
	{
		fact = fact * i;
		sum += 1 / fact;
	}

	std::cout << sum << std::endl;

	return EXIT_SUCCESS;
}