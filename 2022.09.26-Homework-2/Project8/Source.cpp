#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int mx = 0;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if ((a >= b) && (a >= c))
    {
        mx = a;
    }
    else if ((b >= a) && (b >= c))
    {
        mx = b;
    }
    else
    {
        mx = c;
    }

    if (mx >= a + b + c - mx)
    {
        std::cout << "impossible" << std::endl;
    }
    else
    {
        if (mx * mx == a * a + b * b + c * c - mx * mx)
        {
            std::cout << "right" << std::endl;
        }
        else if (mx * mx < a * a + b * b + c * c - mx * mx)
        {
            std::cout << "acute" << std::endl;
        }
        else
        {
            std::cout << "obtuse" << std::endl;
        }
    }

    return EXIT_SUCCESS;
}