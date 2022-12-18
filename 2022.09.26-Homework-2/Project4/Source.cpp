#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int x = 0;
    std::cin >> a >> b >> c >> d;
    x = (-1 * b) / a;

    if ((a == 0) && (b == 0))
    {
        std::cout << "INF" << std::endl;
    }
    else if ((a == 0) || (b * c == a * d) || (c * x + d == 0))
    {
        std::cout << "NO" << std::endl;
    }
    else if (b % a == 0)
    {
        std::cout << x << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return EXIT_SUCCESS;
}