#include <iostream>

void func(int i, int len, std::string str) 
{	
	if (len % 2 != 0)
	{
		if (i < len / 2)
		{
			std::cout << str[i] << "(";
			return func(i + 1, len, str);
		}
		else if (i == len / 2)
		{
			std::cout << str[i] << str[i + 1];
			return func(i + 2, len, str);
		}
		else if (i < len && i > len / 2)
		{
			std::cout << ")" << str[i];
			return func(i + 1, len, str);
		}
		else
		{
			std::cout << ")" << str[i];
		}
	}
	else
	{
		if (i < len / 2)
		{
			std::cout << str[i] << "(";
			return func(i + 1, len, str);
		}
		else if (i < len && i >= len / 2)
		{
			std::cout << str[i] << ")";
			return func(i + 1, len, str);
		}
		else
		{
			std::cout << str[i];
		}
	}
}

int main(int argc, char* argv[]) {
	std::string str;

	std::cin >> str;

	func(0, str.size() - 1, str);

	return EXIT_SUCCESS;
}

