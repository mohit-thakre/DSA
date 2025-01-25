#include <iostream>
using namespace std;

void reverse(int arr[], int j, int n)
{

  int p = j;
  int q = n - 1;
  while (p < q)
  {
    swap(arr[p], arr[q]);
    p++;
    q--;
  }
}

void rightshift(int arr[], int n, int k)
{

  reverse(arr, 0, n);
  reverse(arr, 0, k);
  reverse(arr, k, n);
  cout << "right shift" << endl;
  for (int i = 0; i < n; i++)
  {

    cout << arr[i] << " ";
  }
  cout << endl;
}

void leftshift(int arr[], int n, int k)
{

  reverse(arr, 0, n);
  reverse(arr, 0, n - k);
  reverse(arr, n - k, n);
  cout << "left shift" << endl;
  for (int i = 0; i < n; i++)
  {

    cout << arr[i] << " ";
  }
}

int main()
{

  int arr[7] = {1, 2, 3, 4, 5};
  int s = 5;
  rightshift(arr, 5, 2);
  leftshift(arr, 5, 2);

  return 0;
}