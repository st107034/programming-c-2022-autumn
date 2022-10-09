#include <iostream>

int main(int argc, char* argv[])
{
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    std::cin >> x1;
    std::cin >> y1;
    std::cin >> x2;
    std::cin >> y2;
    
    if ((x1 == x2) || (y1 == y2))
    {
        std::cout << "YES" << std::endl;
    }
    else if ((x2 - x1 == y2 - y1) || ((x2 - x1) * (-1) == y2 - y1) || (x2 - x1 == (y2 - y1) * (-1)))
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return EXIT_SUCCESS;
}