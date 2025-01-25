#include <iostream>
using namespace std;

void duplicate(int arr[], int n)
{

    int p = 0;
    int q = 1;
    while (q < n)
    {

        if (arr[p] != arr[q])
        {
            p++;
            arr[p] = arr[q];
        }
        q++;
    }

    for (int i = 0; i <= p; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[7] = {1, 1, 2, 2, 2, 3, 3};
    int s = 5;
    duplicate(arr, 7);

    return 0;
}