#include <iostream>
using namespace std;

int printNumber(int i, int n)
{
    if (i > n)
    {
        return 0;
    }
    cout << i << endl;
    printNumber(i + 1, n);
}

int main()
{
    printNumber(1, 5);
    return 0;
}