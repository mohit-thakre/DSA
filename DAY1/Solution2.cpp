#include <iostream>
using namespace std;

int reverse(int n)
{

    int num = 0;
    int lastvalue = 0;

    while (n > 0)
    {
        lastvalue = n % 10;
        n = n / 10;
        num = num * 10 + lastvalue;
    }
    return num;
}

int main()
{

    cout << reverse(10400);

    return 0;
}