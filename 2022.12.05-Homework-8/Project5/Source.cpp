#include <iostream>

void func(int a)
{
	if (a % 3 == 0)
	{
		std::cout << "YES";
	}
	else
	{
		if (a < 5)
		{
			std::cout << "NO";
		}
		else
		{
			func(a - 5);
		}
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	func(n - 1);

	return EXIT_SUCCESS;
}