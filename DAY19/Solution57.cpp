#include <iostream>
using namespace std;

string largestoddinstringg(string s)
{

	int left = 0;
	int right = s.length() - 1;

	while (right >= left)
	{
		char ch = s[right];
		if ((ch - '0') % 2 != 0)
		{

			break;
		}
		right--;
	}
	return s.substr(0, right + 1);
}

int main()
{

	cout << largestoddinstringg("2698");
	return 0;
}
