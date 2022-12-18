#include <iostream>

int main(int argc, char* argv[])
{
	const int N = 1000;
	int n = 0;
	int b = 0;
	int a[N]{ 0 };

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < (n / 2); i++)
	{
		b = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = b;
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << a[i] << " ";
	}

	return EXIT_SUCCESS;
}