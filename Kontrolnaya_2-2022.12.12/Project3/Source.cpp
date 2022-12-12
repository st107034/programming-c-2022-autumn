#include <iostream>

void prime(int i, int n)
{
	if (i * i > n)
	{
		std::cout << "prime";
		return;
	}
	if (n % i == 0)
	{
		std::cout << "composite";
		return;
	}
	prime(i + 1, n);
}

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 2;

	std::cin >> n;
	prime(i, n);
	return EXIT_SUCCESS;
}