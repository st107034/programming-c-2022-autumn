#include <iostream>

int min(int a, int b, int c, int d)
{
	if (a > b)
	{
		return min(b, a, c, d);
	}
	if (c > d)
	{
		return min(a, b, d, c);
	}
	if (a > c)
	{
		return min(c, b, a, d);
	}
	return a;
}

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> a >> b >> c >> d;

	std::cout << min(a,b,c,d) << std::endl;

	return EXIT_SUCCESS;
}