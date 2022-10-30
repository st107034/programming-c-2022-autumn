#include <iostream>

int main(int argc, char* argv[]) 
{
	int n = 0;
	int mx = -1;
	int in = 1;

	std::cin >> n;

	int *a = new int[n] {0};
	int *b = new int[n] {0};

	for (int i = 0; i < n; ++i) 
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; ++i) 
	{
		std::cin >> b[i];
	}

	for (int i = 0; i < n; ++i) 
	{
		if ((a[i] * b[i]) > mx)
		{
			mx = a[i] * b[i];
			in = i + 1;
		}
		
	}

	delete[] a;
	delete[] b;

	std::cout << in << std::endl;

	return EXIT_SUCCESS;
}