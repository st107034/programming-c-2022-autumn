#include <iostream>

bool prime(int i, int n)
{
	if (i * i > n)
	{
		return true;
	}
	if (n % i == 0)
	{
		return false;
	}
	prime(n, i + 1);
}

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 2;

	std::cin >> n;

	if (prime(i, n) == true)
	{
		std::cout << "prime";
	}
	else
	{
		std::cout << "composite";
	}

	return EXIT_SUCCESS;
}