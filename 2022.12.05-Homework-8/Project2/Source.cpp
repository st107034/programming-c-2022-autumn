#include <iostream>

int phi(int n)
{
	if (n > 1)
	{
		return (phi(n - 1) + phi(n - 2));
	}
	else
	{
		return 1;
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	std::cout << phi(n) << std::endl;
}