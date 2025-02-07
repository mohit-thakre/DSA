#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
	int pivot = arr[s];
	int count = 0;

	for (int i = s + 1; i <= e; i++)
	{
		if (arr[i] < pivot)
		{
			count++;
		}
	}
	int pivotidx = count + s;
	swap(arr[s], arr[pivotidx]);

	int i = s;
	int j = e;
	while (i < pivotidx && pivotidx < j)
	{
		while (arr[i] < pivot)
		{
			i++;
		}
		while (arr[j] > pivot)
		{
			j--;
		}
		if (i < pivotidx && pivotidx < j)
		{
			swap(arr[i++], arr[j--]);
		}
	}
	return pivotidx;
}

void quicksort(int arr[], int s, int e)
{
	if (s >= e)
		return;

	int p = partition(arr, s, e);

	quicksort(arr, s, p - 1);
	quicksort(arr, p + 1, e);
}

int main()
{
	int arr[5] = {2, 1, 3, 4, 5};
	quicksort(arr, 0, 4);

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
