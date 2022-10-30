#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int l = 0;
	int r = 0;
	int mx = -1001;
	int in = 0;

	std::cin >> n;

	int *a = new int[n] { 0 };

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> l >> r;

	for (; l <= r; l++)
	{
		if (a[l-1] > mx)
		{
			mx = a[l-1];
			in = l;
		}
	}

	delete[] a;

	std::cout << mx << " " << in << std::endl;

	return EXIT_SUCCESS;
}