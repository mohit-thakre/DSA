#include <iostream>
using namespace std;

int floorsqrt(int n)
{
	int s = 0;
	int e = n;
	int mid = s + (e - s) / 2;
	int ans = 1;

	while (s <= e)
	{
		if (n < mid * mid)
		{

			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}

		mid = s + (e - s) / 2;
	}

	return s;
}

int main()
{

	cout << floorsqrt(26);
	return 0;
}
