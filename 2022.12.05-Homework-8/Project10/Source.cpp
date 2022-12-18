#include <iostream>

int func(int num, int*& a, int n)
{
	for (int i = 0; i < n; i++) 
	{
		if (a[i] == num)
		{
			return 1 + func(i + 1, a, n);
			break;
		}
	}
	return 1;
}

int main(int argc, char* argv[]) 
{
	int n = 0;
	int k = 0;

	std::cin >> n;

	int* a = new int[n] {0};
	for (int i = 0; i < n; i++) 
	{
		int b = 0;
		std::cin >> b;
		std::cin >> a[i];
	}

	std::cin >> k;

	std::cout << func(k, a, n);

	delete[] a;

	return EXIT_SUCCESS;
}

