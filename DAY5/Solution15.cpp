#include <iostream>
using namespace std;

bool palindromeString(string s)
{

    int l = s.length();

    int p = 0;
    int q = l - 1;

    while (p < q)
    {
        if (s[p] == s[q])
        {
            p++;
            q--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{

    cout << palindromeString("ababva");

    return 0;
}