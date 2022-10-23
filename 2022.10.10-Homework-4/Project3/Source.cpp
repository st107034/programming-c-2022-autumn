#include <iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int cnt = 0;
	int y = 1;
	std::cin >> x;

	for (int i = 0; i < x; i++)
	{
		std::cout << y << " ";
		cnt++;
		if (cnt == y)
		{
			y++;
			cnt = 0;
		}
	}

	std::cout << std::endl;

	return EXIT_SUCCESS;
}