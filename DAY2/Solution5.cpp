#include <iostream>
using namespace std;

bool armstrong(int n)
{

    int sum = 0;
    int digit = 0;
    int num = n;
    while (n > 0)
    {
        digit = n % 10;
        n = n / 10;
        sum += digit * digit * digit;
    }
    cout << "sum = " << sum << endl;
    cout << "num = " << num << endl;
    if (sum == num)
    {

        return true;
    }
    return false;
}

int main()
{

    cout << armstrong(371);

    return 0;
}