#include <iostream>
using namespace std;

int searchrotated1(int arr[], int n, int t)
{
	int s = 0;
	int e = n - 1;
	int mid = s + (e - s) / 2;

	while (s <= e)
	{
		if (arr[mid] == t)
		{
			return true;
		}
		else if (arr[mid] > arr[s])
		{

			if (arr[s] <= t && arr[mid] > t)
			{

				e = mid - 1;
			}
			else
			{
				s = mid + 1;
			}
		}
		else
		{
			if (arr[mid] < t && arr[e] >= t)
			{
				s = mid + 1;
			}
			else
			{
				e = mid - 1;
			}
		}

		mid = s + (e - s) / 2;
	}

	return false;
}

int main()
{

	int arr[8] = {4, 5, 6, 7, 0, 1, 2, 3};

	cout << searchrotated1(arr, 8, 1);
	return 0;
}