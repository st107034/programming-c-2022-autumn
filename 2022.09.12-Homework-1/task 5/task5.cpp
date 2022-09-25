#include <iostream>

int main(int argc, char* argv[])
{
    int n=0;
    std::cin>>n;
    std::cout<<(n/100)+(n%10)+((n%100)/10)<<std::endl;
    return EXIT_SUCCESS;
}