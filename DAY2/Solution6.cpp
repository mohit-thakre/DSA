#include <iostream>
using namespace std;

int findDivisor(int n)
{

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{

    cout << findDivisor(12);

    return 0;
}