#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int help = 0;

	std::cin >> n;

	int** a = new int* [n] {0};

	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n] {0};
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			help = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = help;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < n; i++)
	{
		delete[] a[i];
	}
	delete[] a;

	return EXIT_SUCCESS;

}