#include <iostream>
#include "Fraction.h"

int main(int argc, char* argv[])
{
	Fraction f(6, 15);
	Fraction b(14, 8);

	std::cout << "f=" << f << " ; b=" << b << std::endl;
	std::cout << "f + 3=" << f + 3 << std::endl;
	std::cout << "f - 3=" << f - 3 << std::endl;
	std::cout << "f * 3=" << f * 3 << std::endl;
	std::cout << "f / 3=" << f / 3 << std::endl;

	std::cout << "3 + f=" << 3 + f << std::endl;
	std::cout << "3 - f " << 3 - f << std::endl;
	std::cout << "3 * f" << 3 * f << std::endl;
	std::cout << "3 / f" << 3 / f << std::endl;

	std::cout << "f + b" << f + b << std::endl;
	std::cout << "f - b" << f - b << std::endl;
	std::cout << "f * b" << f * b << std::endl;
	std::cout << "f / b" << f / b << std::endl;

	return EXIT_SUCCESS;
}