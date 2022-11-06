#include <iostream>

int main(int argc, char* argv[])
{
	const int N = 100;
	int n = 0;
	int a[N]{ 0 };
	int cnt1 = 0;
	int cnt2 = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			std::cout << a[i] << " ";
			cnt1++;
		}
	}

	std::cout << std::endl;

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			std::cout << a[i] << " ";
			cnt2++;
		}
	}

	std::cout << std::endl;

	if (cnt2 < cnt1)
	{
		std::cout << "NO";
	}
	else
	{
		std::cout << "YES";
	}

	return EXIT_SUCCESS;
}