#include <iostream>

void f(int i, int len, std::string str) {
	if (len - i > 0) {
		if (str[i] != str[len]) std::cout << str[i];
		f(i + 1, len - 1, str);
		if (str[i] != str[len]) std::cout << str[len];
	}
}

int main(int argc, char* argv[]) {
	std::string str;

	std::cin >> str;

	f(0, str.size() - 1, str);

	return EXIT_SUCCESS;
}

