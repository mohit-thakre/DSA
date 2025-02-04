#include <iostream>
#include <algorithm>
using namespace std;

int depthofparenthesis(string s)
{
	int maxi = INT16_MIN;
	int count = 0;
	int n = s.length();

	for (int i = 0; i < n; i++)
	{

		if (s[i] == '(')
		{
			count++;
		}
		else if (s[i] == ')')
		{
			count--;
		}

		maxi = max(maxi, count);
	}

	return maxi;
}

int main()
{

	cout << depthofparenthesis("(1+(2*3)+8/4)+1") << endl;
	return 0;
}
