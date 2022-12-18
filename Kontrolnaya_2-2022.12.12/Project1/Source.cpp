#include <iostream>

void spiral(int** list, int n, int b, int c)
{
	int i = 0;
	int j = 0;
	if (b < n / 2 + (n & 1 ? 1 : 0))
	{
		for (j = b; j < n - b; j++)
		{
			list[b][j] = c++;
		}

		j = j - 2;

		for (i = b + 1; i < n - b; i++)
		{
			list[i][n - b - 1] = c++;
		}

		i = i - 1;

		for (j = j; j >= b; j = j - 1)
		{
			list[i][j] = c++;
		}

		j++;
		i = i - 1;

		for (i = i; i >= b + 1; i = i - 1)
		{
			list[i][j] = c++;
		}

		spiral(list, n, b + 1, c);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int** list = new int* [n];
	
	for (int i = 0; i < n; i++)
	{
		list[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			list[i][j] = n * i + j + 1;
		}
	}

	spiral(list, n, 0, 1);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << list[i][j] << " ";
		}

		std::cout << std::endl;
	}

	for (int i = 0; i < n; i++)
	{
		delete[] list[i];
	}

	delete[] list;

	return EXIT_SUCCESS;
}