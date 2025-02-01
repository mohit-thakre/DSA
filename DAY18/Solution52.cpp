#include <iostream>
using namespace std;

int peakelement(int arr[], int n)
{
	int s = 0;
	int e = n - 1;
	int mid = s + (e - s) / 2;

	if (arr[0] > arr[1])
		return 0;
	if (n == 1)
		return 0;
	if (arr[n - 1] > arr[n - 2])
		return n - 1;

	while (s <= e)
	{
		if (arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid])
		{
			return mid;
		}
		else if (arr[mid - 1] < arr[mid])
		{
			s = mid + 1;
		}
		else
		{
			e = mid - 1;
		}

		mid = s + (e - s) / 2;
	}

	return -1;
}

int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};

	cout << peakelement(arr, 10);
	return 0;
}
