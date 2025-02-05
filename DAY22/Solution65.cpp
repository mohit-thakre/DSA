#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int palindrome(string s)
{

	int p = 0;
	int q = s.length() - 1;

	while (p < q)
	{
		if (s[p] == s[q])
		{
			p++;
			q--;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int main()
{
	cout << palindrome("abcba");

	return 0;
}
