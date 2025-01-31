#include <iostream>
using namespace std;

int rotatedarraycount(int arr[], int n)
{
	int s = 0;
	int e = n - 1;
	int mid = s + (e - s) / 2;
	int ans = INT16_MAX;
	int index = -1;

	while (s <= e)
	{

		if (arr[s] <= arr[e])
		{
			if (arr[s] < ans)
			{
				index = s;
				ans = arr[s];
			}
			break;
		}

		if (arr[s] <= arr[mid])
		{
			if (arr[s] < ans)
			{
				index = s;
				ans = arr[s];
			}
			s = mid + 1;
		}
		else
		{
			if (arr[mid] < ans)
			{
				index = mid;
				ans = arr[mid];
			}
			e = mid - 1;
		}
		mid = s + (e - s) / 2;
	}

	return index;
}

int main()
{
	int arr[4] = {2, 3, 4, 1};
	cout << rotatedarraycount(arr, 4);
	return 0;
}
