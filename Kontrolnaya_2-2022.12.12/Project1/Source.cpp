#include <iostream>

void spiral(int** list, int n, int b, int a)
{
	int i = 0;
	int j = 0;
	if (b < n / 2 + (n & 1 ? 1 : 0))
	{
		for (j = b; j < n - b; j++)
		{
			list[b][j] = a++;
		}

		j = j - 2;

		for (i = b + 1; i < n - b; i++)
		{
			list[i][n - b - 1] = a++;
		}

		i = i - 1;

		for (j = j; j >= b; j = j - 1)
		{
			list[i][j] = a++;
		}

		j++;
		i = i - 1;

		for (i = i; i >= b + 1; i = i - 1)
		{
			list[i][j] = a++;
		}

		spiral(list, n, b + 1, a);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int** a = new int* [n];
	
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = n * i + j + 1;
		}
	}

	spiral(a, n, 0, 1);

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