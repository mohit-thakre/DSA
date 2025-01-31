#include <iostream>
#include <algorithm>
using namespace std;

int minimumrotated(int arr[], int n)
{
	int s = 0;
	int e = n - 1;
	int mid = s + (e - s) / 2;

	int mine = INT32_MAX;

	while (s <= e)
	{

		if (arr[s] <= arr[mid])
		{

			mine = min(mine, arr[s]);
			s = mid + 1;
		}
		else
		{
			mine = min(mine, arr[mid]);
			e = mid - 1;
		}
		mid = s + (e - s) / 2;
	}

	return mine;
}

int main()
{

	int arr[5] = {6, 7, 8, 2, 3};

	cout << minimumrotated(arr, 5);
	return 0;
}