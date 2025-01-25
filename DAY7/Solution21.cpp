#include <iostream>
using namespace std;

void leftrotate(int arr[], int n)
{
    int temp[n];
    for (int i = 0; i < n - 1; i++)
    {
        temp[i] = arr[i + 1];
    }
    temp[n - 1] = arr[0];

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    leftrotate(arr, 5);

    return 0;
}