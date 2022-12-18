#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int mx = -1000;
	int mn = 1000;

	std::cin >> n;

	int *a = new int[n] { 0 };

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] > mx)
		{
			mx = a[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] < mn)
		{
			mn = a[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] == mx)
		{
			a[i] = mn;
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << a[i] << " ";
	}
	
	std::cout << std::endl;

	delete[] a;

	return EXIT_SUCCESS;
}