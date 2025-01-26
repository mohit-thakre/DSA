#include <iostream>
#include <algorithm>
using namespace std;

bool twosum(int arr[], int n, int t)
{
    bool present = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == t)
                present = true;
        }
    }
    return present;
}

int twosum1(int arr[], int n, int t)
{

    sort(arr, arr + n);
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (arr[i] + arr[j] == t)
        {
            cout << arr[i] << "+" << arr[j] << " = " << t << endl;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] < t)
        {
            i++;
        }
        else
            j--;
    }
}

int main()
{

    int arr[6] = {1, 0, 0, 9, 0, 1};
    twosum1(arr, 6, 10);

    return 0;
}