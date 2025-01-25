#include <iostream>
using namespace std;

int max(int arr[], int s)
{

    int max = arr[0];
    for (int i = 0; i < s; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int min(int arr[], int s)
{

    int min = arr[0];
    for (int i = 0; i < s; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{

    int arr[5] = {1, 2, 3, 9, 0};
    int s = 5;
    cout << max(arr, s);
    cout << min(arr, s);

    return 0;
}