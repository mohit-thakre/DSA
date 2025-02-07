#include <iostream>
using namespace std;

void recursivebubblesort(int arr[], int n)
{

	if (n == 1)
		return;

	for (int j = 0; j < n - 1; j++)
	{
		if (arr[j + 1] < arr[j])
		{
			swap(arr[j + 1], arr[j]);
		}
	}

	recursivebubblesort(arr, n - 1);
}

int main()
{
	int arr[5] = {2, 1, 3, 4, 5};
	recursivebubblesort(arr, 5);
	return 0;
}
