#include <iostream>


int func(int cache[], int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0)
	{
		return 1;
	}
	if (a > 20 || b > 20 || c > 20)
	{
		return func(cache, 20, 20, 20);
	}
	if (a < b && b < c)
	{
		if (cache[a*10000 + b * 100 + c]!= 0)
		{
			return cache[a * 10000 + b * 100 + c];
		}
		else {
			cache[a * 10000 + b * 100 + c] = (func(cache, a, b, c - 1) + func(cache, a, b - 1, c - 1) - func(cache, a, b - 1, c));
			return cache[a * 10000 + b * 100 + c];
		}
	}
	else
	{
		if (cache[a * 10000 + b * 100 + c] != 0)
		{
			return cache[a * 10000 + b * 100 + c];
		}
		else
		{
			cache[a * 10000 + b * 100 + c] = (func(cache, a - 1, b, c) + func(cache, a - 1, b - 1, c) + func(cache, a - 1, b, c - 1) - func(cache, a - 1, b - 1, c - 1));
			return cache[a * 10000 + b * 100 + c];

		}
	}
}

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int cache[202021] = {0};
	std::cin >> a >> b >> c;
	std::cout << func(cache, a, b, c);

	return EXIT_SUCCESS;


}