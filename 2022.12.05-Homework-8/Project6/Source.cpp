#include <iostream>

char func(int a, char mx, std::string str, int len) {
	if (a < len) {
		if (mx < str[a]) 
		{
			return func(a + 1, str[a], str, len);
		}
		else
		{
			return func(a + 1, mx, str, len);
		}
	}
	return mx;
}

int main(int argc, char* argv[]) {
	std::string str;

	std::cin >> str;

	int len = str.size();

	std::cout << func(0, '0', str, len);

	return EXIT_SUCCESS;
}

