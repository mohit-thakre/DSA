#include <iostream>
using namespace std;

int consecutiveone(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        if (arr[i] != 1)
        {
            count = 0;
        }
    }
    return count;
}

int main()
{

    int arr[6] = {1, 0, 1, 9, 1, 1};
    cout << consecutiveone(arr, 6);

    return 0;
}