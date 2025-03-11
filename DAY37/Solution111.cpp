#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int subarrayMinimum(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int sm = arr[i];
		for (int j = i; j < n; j++)
		{

			sm = min(sm, arr[j]);
			sum += sm;
		}
	}
	return sum;
}

int main()
{
	int arr[] = {1, 2, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << subarrayMinimum(arr, n);

	return 0;
}
