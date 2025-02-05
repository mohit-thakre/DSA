#include <iostream>
#include <algorithm>
using namespace std;

int atoi(string s)
{

	int n = s.length();
	int sign = 1;
	int i = 0;
	int result = 0;

	while (i < n && s[i] == ' ')
		i++;

	if (i < n && s[i] == '+')
	{
		sign = +1;
		i++;
	}
	else if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (i < n && isdigit(s[i]))
	{
		result = result * 10 + (s[i] - '0');

		if (result * sign >= INT8_MAX)
			return INT8_MAX;
		if (result * sign <= INT8_MIN)
			return INT8_MIN;
	}

	return result * sign;
}

int main()
{
	cout << atoi("words and 987");
	return 0;
}
