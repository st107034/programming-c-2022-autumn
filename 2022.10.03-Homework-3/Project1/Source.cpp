#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    while (a <= b)
    {
        std::cout << a << std::endl;
        a = a + 1;
    }

    return EXIT_SUCCESS;
}