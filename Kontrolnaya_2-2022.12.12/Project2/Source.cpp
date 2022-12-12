#include <iostream>

int read(int i, int n, int* a)
{
	if (i < n)
	{
		std::cin >> a[i];
		read(i + 1, n, a);
	}
	return 0;
}


int reverse(int i,int b, int n, int* a)
{
	if (i < (n / 2))
	{
		b = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = b;
		reverse(i + 1, b, n, a);
	}
	return 0;
}

int out(int i, int n, int* a)
{
	if (i < n)
	{
		std::cout << a[i] << " ";
		out(i+1, n, a);
	}
	return 0;
}

int main(int argc, char* argv[])
{
	int n = 0;
	int* a = new int[n] {0};
	int i = 0;
	int b = 0;

	std::cin >> n;

	read(i, n, a);

	reverse(i, b, n, a);

	out(i, n, a);

	delete[] a;
	return EXIT_SUCCESS;
}