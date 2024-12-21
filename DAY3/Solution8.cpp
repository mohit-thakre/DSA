#include <iostream>
using namespace std;
int n = 0;
void printNumber()
{

    if (n == 5)
    {
        return;
    }

    cout << n << endl;
    n++;
    printNumber();
}
int main()
{
    printNumber();

    return 0;
}