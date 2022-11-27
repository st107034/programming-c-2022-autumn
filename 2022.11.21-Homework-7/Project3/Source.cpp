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

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			help = a[i][j];
			a[i][j] = a[n- 1 - j][n - 1 - i];
			a[n - 1 - j][n - 1 - i] = help;
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