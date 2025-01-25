#include <iostream>
using namespace std;

bool checkSorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{

    int arr[5] = {1, 2, 3, 5, 6};
    cout << checkSorted(arr, 5);

    return 0;
}