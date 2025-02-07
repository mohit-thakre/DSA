#include <iostream>
#include <algorithm>
using namespace std;

void recursiveinsertionsort(int arr[], int i, int n)
{

	if (i == n)
		return;

	int j = i;

	while (j > 0 && arr[j - 1] > arr[j])
	{

		swap(arr[j - 1], arr[j]);
		j--;
	}

	recursiveinsertionsort(arr, i + 1, n);
}

int main()
{

	int arr[5] = {5, 4, 3, 2, 1};
	recursiveinsertionsort(arr, 0, 5);
	return 0;
}
