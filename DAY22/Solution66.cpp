#include <iostream>
#include <algorithm>
using namespace std;

string uppercasetolowercase(string s) // Upper case to lower case
{

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
	}
	return s;
}

string lowercasetouppercase(string s) // lower case to upper case
{

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return s;
}

int main()
{

	cout << lowercasetouppercase("ASDFadf") << endl;
	return 0;
}
