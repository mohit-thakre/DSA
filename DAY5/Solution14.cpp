#include <iostream>
using namespace std;

// using two pointer
int reverseArray(int arr[], int s)

{

    int i = 0;
    int j = s - 1;

    while (i < j)
    {

        swap(arr[i], arr[j]);

        i++;
        j--;
    }
    for (int i = 0; i < s; i++)
    {
        cout << arr[i];
    }
}

// using extra array
int reverseArray1(int arr[], int s)
{

    int ans[s];

    for (int i = 0; i < s; i++)
    {

        ans[i] = arr[s - i - 1];
    }
    for (int i = 0; i < s; i++)
    {
        cout << ans[i] << " ";
    }
}

//  using recursive method
void reverseArray2(int arr[], int start, int end)
{
    if (start < end)
    {
        swap(arr[start], arr[end]);
        reverseArray2(arr, start + 1, end - 1);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverseArray2(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}