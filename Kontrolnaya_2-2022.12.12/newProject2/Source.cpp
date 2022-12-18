#include <iostream>

void h(int n, int a, int b)
{
	if (n > 0)
	{
		int c = 6 - a - b;
		if (((a == 1) && (b == 2)) || ((a == 2) && (b == 3)) || ((a == 3) && (b == 1)))
		{
			h(n - 1, a, c);
			std::cout << n << " " << a << " " << b << std::endl;
			h(n - 1, c, b);
		}

		else
		{
			h(n - 1, a, b);
			std::cout << n << " " << a << " " << c << std::endl;
			h(n - 1, b, a);
			std::cout << n << " " << c << " " << b << std::endl;
			h(n - 1, a, b);
		}
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	h(n, 1, 3);

	return EXIT_SUCCESS;
}