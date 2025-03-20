#include <iostream>

using namespace std;

int pow(int x, int n, int &ans)
{
    if (n == 0)
    {
        return ans;
    }
    ans = ans * x;

    pow(x, n - 1, ans);
}

int main()
{
    int ans = 1;
    cout << pow(2, 3, ans);

    return 0;
}