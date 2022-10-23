#include <iostream>

int main(int argc, char* argv[])
{
	int cnt = 0;
	int x = 0;
	std::cin >> x;

	for (int i = 1; i * i <= x; i++)
	{
		if (x % i == 0)
		{
			if (i * i == x)
			{
				cnt++;
			}
			else
			{
				cnt += 2;
			}
		}
	}

	std::cout << cnt << std::endl;

	return EXIT_SUCCESS;
}