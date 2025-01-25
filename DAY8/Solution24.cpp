#include <iostream>
using namespace std;

void movezero(int arr[], int n)
{
    int p = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[p], arr[i]);
            p++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{

    int arr[10] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    movezero(arr, 10);

    return 0;
}