#include <iostream>
using namespace std;

void printName(int i, int n)
{
    if (i > n)
    {
        return;
    }

    cout << "MOHIT" << endl;
    i++;
    printName(i, n);
}

int main()
{
    printName(1, 6);
    return 0;
}