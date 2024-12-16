#include <iostream>
using namespace std;

bool palindrome(int n)
{

    int f = 0;
    int l = n % 10;
    while (n > 0)
    {

        f = n % 10;
        n = n / 10;
    }
    if (f == l)
    {

        return true;
    }
    else
    {

        return false;
    }
}

int main()
{
    cout << palindrome(434);
    return 0;
}