#include <iostream>
using namespace std;

int countDigit(int n)
{

    int count = 0;

    while (n > 0)
    {
        n = n / 10;
        count += 1;
    }
    return count;
}

int main()
{
    int n = 444;
    cout << countDigit(n);
    return 0;
}