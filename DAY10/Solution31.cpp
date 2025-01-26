#include <iostream>
using namespace std;

void sort012(int arr[], int s)
{
  int zero = 0;
  int one = 0;
  int two = 0;

  for (int i = 0; i < s; i++)
  {
    if (arr[i] == 0)
    {
      zero++;
    }
    else if (arr[i] == 1)
    {
      one++;
    }
    else if (arr[i] == 2)
    {
      two++;
    }
  }

  for (int i = 0; i < zero; i++)
  {
    arr[i] = 0;
  }
  for (int i = zero; i < one + zero; i++)
  {
    arr[i] = 1;
  }
  for (int i = zero + one; i < s; i++)
  {
    arr[i] = 2;
  }

  for (int i = 0; i < s; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{

  int arr[5] = {0, 0, 2, 2, 1};
  sort012(arr, 5);

  return 0;
}