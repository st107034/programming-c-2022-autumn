#include <iostream>

int main(int argc, char* argv[])
{
	const int N = 100000;
	int n = 0;
	int m = 0;
	int a[N]{ 0 };
	int b[N]{ 0 };
	int num = 0;

	std::cin >> n >> m;
	
	for (int i = 0; i < n; i++)
	{
		num = 0;
		std::cin >> num;
		a[num] = 1;
	}

	for (int i = 0; i < m; i++)
	{
		num = 0;
		std::cin >> num;
		b[num] = 1;
	}

	for (int i = 0; i <= N; i++)
	{
		if (a[i] == 1 && b[i] == 1)
		{
			std::cout << i << " ";
		}
	}

	return EXIT_SUCCESS;
}