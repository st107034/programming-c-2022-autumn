#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	double sum = 1.0;
	int fact = 1;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;
		sum += 1.0 / fact;
	}

	std::cout << sum << std::endl;

	return EXIT_SUCCESS;
}