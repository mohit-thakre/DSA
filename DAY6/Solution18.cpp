#include <iostream>
using namespace std;

int secondMax(int arr[], int n)
{

    int max = INT8_MIN;
    int secMax = INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            secMax = max;
            max = arr[i];
        }
        else if (secMax < arr[i] && arr[i] != max)
        {
            secMax = arr[i];
        }
    }

    return secMax;
}

int secondMin(int arr[], int n)
{

    int min = INT8_MAX;
    int secmin = INT8_MAX;

    for (int i = 0; i < n; i++)
    {

        if (min > arr[i])
        {
            secmin = min;
            min = arr[i];
        }
        else if (secmin > arr[i] && min != arr[i])
        {
            secmin = arr[i];
        }
    }
    return secmin;
}

int main()
{
    int arr[5] = {1, 22, 44, 44, -1};
    cout << secondMin(arr, 5) << endl;

    return 0;
}
