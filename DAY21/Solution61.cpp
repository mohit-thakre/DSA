#include <iostream>
#include <algorithm>
using namespace std;

bool anagram(string s, string t)
{
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());

	if (s != t)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	cout << anagram("foobar", "barfor");
	return 0;
}
