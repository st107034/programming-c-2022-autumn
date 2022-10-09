#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int m = 0;
    int k = 0;
    std::cin >> n;
    std::cin >> m;
    std::cin >> k;

    if (((k % n == 0) || (k % m == 0)) && (k < n * m))
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    
    return EXIT_SUCCESS;
}