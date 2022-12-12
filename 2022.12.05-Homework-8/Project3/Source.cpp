#include <iostream>

int C(int n, int k)
{
	if (n < 0 || k < 0)
	{
		return 0;
	}

	if (n == k || k == 0)
	{
		return 1;
	}
	return C(n - 1, k - 1) + C(n - 1, k);
}

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;

	std::cin >> n >> k;

	std::cout << C(n, k) << std::endl;
}