#include <iostream>
using namespace std;

int findtarget(int arr[], int n, int t)
{

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == t)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    cout << findtarget(arr, 5, 5);

    return 0;
}