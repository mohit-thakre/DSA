#include <iostream>
#include <algorithm>
using namespace std;

int selectionsort(int arr[], int n)
{

	int minn;

	for (int i = 0; i < n; i++)
	{

		minn = i;

		for (int j = i; j < n; j++)
		{

			if (arr[j] < arr[minn])
			{
				minn = j;
			}
		}

		swap(arr[minn], arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{

	int arr[5] = {5, 4, 3, 2, 1};
	selectionsort(arr, 5);
	return 0;
}
