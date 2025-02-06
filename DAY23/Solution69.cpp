#include <iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j])
		{
			swap(arr[j - 1], arr[j]);

			j--;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int arr[5] = {2, 1, 3, 4, 5};
	insertionsort(arr, 5);
	return 0;
}
