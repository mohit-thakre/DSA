#include <iostream>
using namespace std;

int sumofNum(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {

        count += i;
    }
    return count;
}

int main()
{
    cout << sumofNum(5);

    return 0;
}