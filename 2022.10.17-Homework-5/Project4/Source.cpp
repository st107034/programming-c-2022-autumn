#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int mx = 0;

	std::cin >> n;

	int *a = new int[n] { 0 };

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if ((a[i] + a[(i + 1) % n] + a[(i + 2) % n]) > mx)
		{
			mx = a[i] + a[(i + 1) % n] + a[(i + 2) % n];
		}
	}
	
	std::cout << mx << std::endl;

	delete[] a;

	return EXIT_SUCCESS;
}