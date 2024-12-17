#include <iostream>
using namespace std;

bool findPrimeNo(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    cout << findPrimeNo(13);

    return 0;
}