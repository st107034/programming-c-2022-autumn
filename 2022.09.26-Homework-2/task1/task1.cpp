#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    
    if (n == 0)
    {
        std::cout << "NOL ";
    }

    switch (n / 100)
    {
    case 1:
        std::cout << "STO ";
        break;
    case 2:
        std::cout << "DVESTI ";
        break;
    case 3:
        std::cout << "TRISTA ";
        break;
    case 4:
        std::cout << "CHETIRISTA ";
        break;
    case 5:
        std::cout << "PYATSOT ";
        break;
    case 6:
        std::cout << "SHESTSOT ";
        break;
    case 7:
        std::cout << "SEMSOT ";
        break;
    case 8:
        std::cout << "VOSEMSOT ";
        break;
    case 9:
        std::cout << "DEVYATSOT ";
        break;
    }

    if ((n % 100 < 20) && (n % 100 > 9))
    {
        switch (n % 100)
        {
        case 10:
            std::cout << "DESYAT BANANOV" << std::endl;
            break;
        case 11:
            std::cout << "ODINNADSAT BANANOV" << std::endl;
            break;
        case 12:
            std::cout << "DVENADSAT BANANOV" << std::endl;
            break;
        case 13:
            std::cout << "TRINADSAT BANANOV" << std::endl;
            break;
        case 14:
            std::cout << "CHETIRNADSAT BANANOV" << std::endl;
            break;
        case 15:
            std::cout << "PYATNADSAT BANANOV" << std::endl;
            break;
        case 16:
            std::cout << "SHESTNADSAT BANANOV" << std::endl;
            break;
        case 17:
            std::cout << "SEMNADSAT BANANOV" << std::endl;
            break;
        case 18:
            std::cout << "VOSEMNADSAT BANANOV" << std::endl;
            break;
        case 19:
            std::cout << "DEVYATNADSAT BANANOV" << std::endl;
            break;
        }
    }
    else
    {
        switch ((n % 100) / 10)
        {
        case 2:
            std::cout << "DVADSAT ";
            break;
        case 3:
            std::cout << "TRIDSAT ";
            break;
        case 4:
            std::cout << "SOROK ";
            break;
        case 5:
            std::cout << "PYATDESYAT ";
            break;
        case 6:
            std::cout << "SHESTDESYAT ";
            break;
        case 7:
            std::cout << "SEMDESYAT ";
            break;
        case 8:
            std::cout << "VOSEMDESYAT ";
            break;
        case 9:
            std::cout << "DEVYANOSTO ";
            break;
        } 

        switch (n % 10)
        {
        case 1:
            std::cout << "ODIN BANAN" << std::endl;
            break;
        case 2:
            std::cout << "DVA BANANA" << std::endl;
            break;
        case 3:
            std::cout << "TRI BANANA" << std::endl;
            break;
        case 4:
            std::cout << "CHETIRE BANANA" << std::endl;
            break;
        case 5:
            std::cout << "PYAT BANANOV" << std::endl;
            break;
        case 6:
            std::cout << "SHEST BANANOV" << std::endl;
            break;
        case 7:
            std::cout << "SEM BANANOV" << std::endl;
            break;
        case 8:
            std::cout << "VOSEM BANANOV" << std::endl;
            break;
        case 9:
            std::cout << "DEVYAT BANANOV" << std::endl;
            break;
        default:
            std::cout << "BANANOV" << std::endl;
            break;
        }
    }

    return EXIT_SUCCESS;
}