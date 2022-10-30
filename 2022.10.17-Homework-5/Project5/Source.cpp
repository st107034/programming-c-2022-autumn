#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int dif = 2001;
	int res = 1001;

	std::cin >> n;

	int *a = new int[n] { 0 };

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> x;

	for (int i = 0; i < n; i++)
	{
		if (abs(x - a[i]) < dif)
		{
			dif = abs(x - a[i]);
			res = a[i];
		}
		else if ((abs(x - a[i]) == dif) && (a[i] < res))
		{
			res = a[i];
		}
	}

	std::cout << res << std::endl;

	delete[] a;

	return EXIT_SUCCESS;
}