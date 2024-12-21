#include <iostream>
using namespace std;

int factorial(int n)
{
    int sum = 1;
    for (int i = 0; i < n; i++)
    {
        sum *= n - i;
    }
    return sum;
}

int main()
{
    cout << factorial(5);

    return 0;
}