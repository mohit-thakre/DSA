#include <iostream>
#include <cmath>
using namespace std;

int nthroot(int num, int value)
{
	int s = 0;
	int e = value;
	int mid = s + (e - s) / 2;

	while (s <= e)
	{
		int ans = pow(mid, num);

		if (ans == value)
		{
			return mid;
		}
		else if (ans > value)
		{
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}

		mid = s + (e - s) / 2;
	}

	return -1;
}

int main()
{
	cout << nthroot(4, 27);
	return 0;
}
