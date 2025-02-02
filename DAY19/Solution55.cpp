#include <iostream>
using namespace std;

string validparenthesis(string s)
{

	string result = "";
	int count = 0;
	int n = s.length();

	for (char ch : s)
	{

		if (ch == '(')
		{

			if (count > 0)
			{
				result += ch;
			}
		}
		else
		{
			count--;
			if (count > 0)
			{
				result += ch;
			}
		}
	}
	return result;
}

int main()
{
	cout << validparenthesis("(())");
	return 0;
}
