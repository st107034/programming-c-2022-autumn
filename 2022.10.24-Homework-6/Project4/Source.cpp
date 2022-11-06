#include <iostream>

int main(int argc, char* argv[])
{
	const int N = 1000;
	int s[N]{ 0 };
	int a= 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int n = 0;
	int h = 0;
	int v = 0;

	std::cin >> n >> a >> b >> c >> d;

	for (int i = 0; i < n; i++)
	{
		s[i] = i + 1;
	}

	for (int i = a - 1; i <(a - 1) + ((b - a + 1) / 2); i++)
	{	
		v++;
		h = s[i];
		s[i] = s[b - v];
		s[b - v] = h;
	}

	v = 0;

	for (int i = c - 1; i < (c - 1) + ((d - c + 1) / 2); i++)
	{	
		v++;
		h = s[i];
		s[i] = s[d - v];
		s[d - v] = h;
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << s[i] << " ";
	}

	return EXIT_SUCCESS;
}