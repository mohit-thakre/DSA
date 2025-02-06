#include <iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
	for (int j = 0; j < n - 1; j++)
	{
		bool issorted = true;

		for (int i = 0; i < n - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				issorted = false;
			}
		}
		if (issorted)
		{
			break;
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
	bubblesort(arr, 5);
	return 0;
}
