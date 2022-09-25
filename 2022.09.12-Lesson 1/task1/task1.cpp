#include <iostream>


int main(int argc, char* argv[])
{
    int b=0;
    std::cin>>b;
    std::cout << "The next number for the number "<<b<<" is "<<b+1<<"."<<std::endl;
    std::cout << "The previuos number for the number "<<b<<" is "<<b-1<<"."<<std::endl;
    return EXIT_SUCCESS;
}