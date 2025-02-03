#include <iostream>
#include <algorithm>
using namespace std;

string commonPrefix(string arr[], int n)
{
	sort(arr, arr + n);

	string ans = "";
	string first = arr[0];
	string last = arr[n - 1];

	for (int i = 0; i < first.size(); i++)
	{
		if (first[i] == last[i])
		{
			ans += first[i];
		}
		else
		{
			break;
		}
	}

	return ans;
}

int main()
{
	string arr[3] = {"ijk", "ijf", "ijc"};
	cout << commonPrefix(arr, 3) << endl;
	return 0;
}
