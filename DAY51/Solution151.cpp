#include <iostream>
using namespace std;

bool isMaxHeap(int arr[], int n)
{

    int i = 0;

    while (i < n)
    {
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[i] < arr[left] || right < n && arr[i] < arr[right])
        {
            return false;
        }
        i++;
    }
    return true;
}

int main()
{

    int arr[] = {90, 15, 10, 7, 12, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isMaxHeap(arr, n))
        cout << "The array represents a max heap.";
    else
        cout << "The array does not represent a max heap.";

    return 0;
}