#include <iostream>
using namespace std;

int appearones(int arr[], int n)
{
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        num ^= arr[i];
    }
    return num;
}

int main()
{

    int arr[8] = {1, 1, 2, 2, 4, 5, 4, 5};
    cout << appearones(arr, 8);

    return 0;
}