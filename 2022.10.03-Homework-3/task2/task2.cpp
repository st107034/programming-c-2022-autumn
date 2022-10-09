#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int cnt = 0;
    std::cin >> n;
    
    while (n != 0)
    {
        if ((n % 2 != 0) && (n < 0))
        {
            cnt = cnt + 1;
        }
        std::cin >> n;
    }

    std::cout << cnt << std::endl;

    return EXIT_SUCCESS;
}