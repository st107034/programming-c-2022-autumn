#include <iostream>

int main(int argc, char* argv[])
{
	const int N = 100;
	int n = 0;
	int a[N]{ 0 };
	int mx = -101;
	int imx = 0;
	int mn = 101;
	int imn = 0;
	int sum = 0;
	int q = 1;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			sum += a[i];
		}

		if (a[i] > mx)
		{
			mx = a[i];
			imx = i;
		}

		if(a[i] < mn)
		{
			mn = a[i];
			imn = i;
		}
	}

	if (imn > imx)
	{
		mx = imx;
		imx = imn;
		imn = mx;
	}

	for (int i = imn + 1; i < imx; i++)
	{
		q *= a[i];
	}

	std::cout << sum << " " << q;

	return EXIT_SUCCESS;
}