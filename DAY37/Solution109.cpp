#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

void NGE2(int arr[], int n)
{
	int ans[n];

	for (int i = 0; i < n; i++)
	{
		ans[i] = -1;

		for (int j = 1; j < n; j++)
		{
			int inx = (i + j) % n;

			if (arr[inx] > arr[i])
			{
				ans[i] = arr[inx];
				break;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << ans[i] << " ";
	}
	cout << endl;
}

void NGE2_circular(int arr[], int n)
{
	stack<int> st;
	int ans[n];

	for (int i = 2 * n - 1; i >= 0; i--)
	{

		while (!st.empty() && st.top() <= arr[i % n])
		{
			st.pop();
		}

		ans[i % n] = st.empty() ? -1 : st.top();
		st.push(arr[i % n]);
	}
}

int main()
{
	int arr[] = {1, 2, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	NGE2(arr, n);

	return 0;
}
