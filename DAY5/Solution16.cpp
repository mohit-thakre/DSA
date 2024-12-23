#include <iostream>
using namespace std;

int fibonacci(int n)
{

    int a = 0;
    int b = 1;
    int c;

    cout << a << " " << b << " ";
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main()
{

    fibonacci(6);
    return 0;
}