#include <iostream>

void h(int disk, int from, int to) {
	if (disk <= 0) 
	{
		return;
	}
	int c = 6 - from - to;
	h(disk - 1, from, c);
	std::cout << "Disk " << disk << " move from " << from << " to " << to << std::endl;
	h(disk - 1, c, to);
}

int main(int argc, char* argv[]) {
	int n = 0;

	std::cin >> n;

	h(n, 1, 2);

	return EXIT_SUCCESS;
}

