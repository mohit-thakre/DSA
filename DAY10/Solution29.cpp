#include <iostream>
using namespace std;

int unionn(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {

        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
        }
        if (arr1[i] > arr2[j])
        {
            cout << arr2[j] << " ";
            j++;
        }
    }
    while (i < n1)
    {
        cout << arr1[i] << " ";
        i++;
    }
    while (j < n2)
    {
        cout << arr2[j] << " ";
        j++;
    }
}

int intersection(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {

        if (arr1[i] == arr2[j])
        {

            cout << arr1[i] << " ";
            i++;
            j++;
        }
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        if (arr1[i] > arr2[j])
        {
            j++;
        }
    }
}

int main()
{

    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[7] = {2, 3, 4, 5, 6, 7, 8};

    intersection(arr1, arr2, 5, 7);

    return 0;
}