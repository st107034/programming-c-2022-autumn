#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;

	std::cin >> n;
	std::cin >> m;

	int** a = new int* [n] {0};

	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m] {0};
	}


	int** b = new int* [n] {0};

	for (int i = 0; i < n; i++)
	{
		b[i] = new int[m] {0};
	}


	int** sum = new int* [n] {0};

	for (int i = 0; i < n; i++)
	{
		sum[i] = new int[m] {0};
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> a[i][j];
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> b[i][j];
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << sum[i][j] << " ";
		}
		std::cout << std::endl;
	}


	for (int i = 0; i < n; i++)
	{
		delete[] a[i];
	}
	delete[] a;

	for (int i = 0; i < n; i++)
	{
		delete[] b[i];
	}
	delete[] b;

	for (int i = 0; i < n; i++)
	{
		delete[] sum[i];
	}
	delete[] sum;

	return EXIT_SUCCESS;

}