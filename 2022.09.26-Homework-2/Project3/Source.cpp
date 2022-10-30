#include <iostream>

int main(int argc, char* argv[])
{
    int k = 0;
    int m = 0;
    int n = 0;
    std::cin >> k;
    std::cin >> m;
    std::cin >> n;

    if (n <= k)
    {
        std::cout << 2 * m << std::endl;
    }
    else
    {
        if ((n * 2) % k != 0)
        {
            std::cout << ((2 * n / k) + 1) * m << std::endl;
        }
        else
        {
            std::cout << (2 * n / k) * m << std::endl;
        }
    }

    return EXIT_SUCCESS;
}