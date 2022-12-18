#include <iostream>

void func(int i, int len, std::string str)
{
	if (i < len)
	{
		std::cout << str[i] << "*";
		return func(i + 1, len , str);
	}
	else
	{
		std::cout << str[i];
	}
}

int main(int argc, char* argv[])
{
	std::string str;

	std::cin >> str;

	func(0, str.size() - 1, str);

	return EXIT_SUCCESS;
}