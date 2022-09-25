#include <iostream>

int main(int argc, char* argv[])
{
    int x=0;
    int x2=0;
    int res=0;
    std::cin>>x;
    x2=x*x;
    res=x2*(x2+x)+x2+x+1;
    std::cout <<res<<std::endl;
    return EXIT_SUCCESS;
}