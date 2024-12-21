#include <iostream>
using namespace std;

void printNumber(int i, int n)
{

    if (i < 1)
        return;

    cout << i << endl;
    printNumber(i - 1, n);
}

int main()
{
    printNumber(5, 5);

    return 0;
}