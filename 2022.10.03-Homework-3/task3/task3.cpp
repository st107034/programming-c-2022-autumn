#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int cnt1 = 1;
    int cnt2 = 0;
    int val = 0;
    int k = 1;
    std::cin >> n;

    if (n > 0)
    {
        do
        {
            val = k;   
            do
            {
                std::cout << val << " ";
                cnt2 = cnt2 + 1;
                val = val + 1;
            } while (cnt2 <= n-1);
            std::cout << std::endl;
            cnt2 = 0;
            k = k + 1;
            cnt1 = cnt1 + 1;   
        } while (cnt1 <= n);
    }
}