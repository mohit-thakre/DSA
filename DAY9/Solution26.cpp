#include <iostream>
using namespace std;

int missing(int arr[], int s)
{

  for (int i = 0; i < s; i++)
  {
    if (arr[i] != i + 1)
    {
      return i + 1;
    }
  }
  return -1;
}

int main()
{

  int arr[5] = {1, 2, 4, 5};
  cout << missing(arr, 5);

  return 0;
}