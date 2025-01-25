#include <iostream>
using namespace std;

void rightrotate(int arr[], int n)
{
    int temp[n];

    temp[0] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {

        temp[i] = arr[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    rightrotate(arr, 5);

    return 0;
}