#include <iostream>

int main(int argc, char* argv[])
{
	const int N = 1000;
	const int M = 100;
	int a[N]{ 0 };
	int i[M]{ 0 };
	int j[M]{ 0 };
	int n = 0;
	int m = 0;

	std::cin >> n;

	for (int k = 0; k < n; k++)
	{
		std::cin >> a[k];
	}

	std::cin >> m;

	for (int k = 0; k < m; k++)
	{
		std::cin >> i[k] >> j[k];
	}

	for (int k = 0; k < m; k++)
	{
		for (int l = i[k] - 1; l < j[k]; l++)
		{
			std::cout << a[l] << " ";
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}
