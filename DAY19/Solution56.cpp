#include <iostream>
#include <string>
using namespace std;

string reverse(string s)
{
	int left = 0;
	int right = s.length() - 1;

	string result = "";
	string word = "";

	while (left <= right)
	{
		char chh = s[left];
		if (chh != ' ')
		{
			word += chh;
		}
		else if (chh == ' ')
		{
			if (result != "")
			{
				result = word + " " + result;
			}
			else
			{
				result = word;
			}
			word = "";
		}
		left++;
	}

	if (word != "")
	{
		if (result != "")
		{
			result = word + " " + result;
		}
		else
		{
			result = word;
		}
	}

	return result;
}

int main()
{
	cout << reverse(" hello hi ");
	return 0;
}
