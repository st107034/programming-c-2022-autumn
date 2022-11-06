#include <iostream>

int main(int argc, char* argv[])
{
	const int N = 100000;
	int n = 0;
	int a[N]{ 0 };
	int mn = 100000;
	int num = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] < mn)
		{
			mn = a[i];
			num = i;
		}
	}

	for (int i = num; i < n + num; i++)
	{
		std::cout << a[i % n] << " ";
	}

	return EXIT_SUCCESS;
}