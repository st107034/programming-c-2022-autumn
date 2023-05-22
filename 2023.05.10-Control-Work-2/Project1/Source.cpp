#include <iostream>
#include "Complex.h"

int main(int argc, char* argv[])
{
	Complex c(5, 7);
	Complex d(4, 6);

	std::cout << "arg(c) = " << c.arg() << std::endl;
	std::cout << "|c| = " << c.abs() << std::endl;
	std::cout << "c + 2 = " << c + 2 << std::endl;
	std::cout << "c - 2 = " << c - 2 << std::endl;
	std::cout << "c * 2 = " << c * 2 << std::endl;
	std::cout << "c / 2 = " << c / 2 << std::endl;
	std::cout << "2 + c = " << 2 + c << std::endl;
	std::cout << "2 - c = " << 2 - c << std::endl;
	std::cout << "2 * c = " << 2 * c << std::endl;
	std::cout << "2 / c = " << 2 / c << std::endl;
	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "c / d = " << c / d<< std::endl;

	return EXIT_SUCCESS;
}