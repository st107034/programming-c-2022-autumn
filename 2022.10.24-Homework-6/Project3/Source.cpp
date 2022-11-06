#include <iostream>

int main(int argc, char* argv[])
{
	const int N = 100;
	int x = 0;
	int a[N]{ 0 };
	int n = 0;
	int num = 1;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> x;

	for (int i = 0; i < n; i++)
	{
		if (x <= a[i])
		{
			num++;
		}
		else
		{
			break;
		}
	}

	std::cout << num << std::endl;

	return EXIT_SUCCESS;
}