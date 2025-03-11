#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int NSE(int arr[], int n)
{

	int ans[n];

	for (int i = 0; i < n; i++)
	{
		ans[i] = -1;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				ans[i] = arr[j];
				break;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << ans[i] << " ";
	}
}

int NSE1(int arr[], int n)
{

	stack<int> st;
	int ans[n];

	for (int i = n - 1; i >= 0; i--)
	{

		ans[i] = -1;

		while (!st.empty() && arr[i] < st.top())
		{
			st.pop();
		}

		ans[i] = st.empty() ? -1 : st.top();
		st.push(arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		cout << ans[i] << " ";
	}
}

int main()
{
	int arr[4] = {4, 5, 2, 25};
	int n = sizeof(arr) / sizeof(arr[0]);
	NSE1(arr, n);
	return 0;
}
