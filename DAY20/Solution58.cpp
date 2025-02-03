#include <iostream>
#include <unordered_map>
using namespace std;

bool isomorphic(string s, string t)
{
	if (s.length() != t.length())
		return false;

	unordered_map<char, char> mapS, mapT;

	for (int i = 0; i < s.length(); i++)
	{
		char c1 = s[i];
		char c2 = t[i];

		if (mapS.count(c1) && mapS[c1] != c2)
		{

			return false;
		}
		if (mapT.count(c2) && mapT[c2] != c1)
		{

			return false;
		}

		mapS[c1] = c2;
		mapT[c2] = c1;
	}
	return true;
}

bool isomorphic1(string s, string t)
{

	if (s.length() != t.length())
		return false;

	char mapS[256] = {0};
	char mapT[256] = {0};

	for (int i = 0; i < s.length(); i++)
	{
		char c1 = s[i];
		char c2 = t[i];

		if (mapS[c1] && mapS[c1] != c2)
		{
			return false;
		}
		if (mapT[c2] && mapT[c2] != c1)
		{

			return false;
		}

		mapS[c1] = c2;
		mapT[c2] = c1;
	}
	return true;
}

int main()
{
	cout << isomorphic1("foobar", "tpijac");
	return 0;
}
