#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int romantointeger(string s)
{

	unordered_map<char, int> value{
		{'I', 1},
		{'V', 5},
		{'X', 10},
		{'L', 50},
		{'C', 100},
		{'D', 500},
		{'M', 1000}};

	int sum = 0;

	for (int i = 0; i < s.length(); i++)
	{

		if (value[s[i]] < value[s[i + 1]])
		{
			sum -= value[s[i]];
		}
		else
		{
			sum += value[s[i]];
		}
	}
	return sum;
}

int main()
{
	cout << romantointeger("MCMXCIV");

	return 0;
}
