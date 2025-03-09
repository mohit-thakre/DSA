#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int priority(char op)
{
	if (op == '+' || op == '-')
		return 1;
	if (op == '*' || op == '/')
		return 2;
	if (op == '^')
		return 3;
	return 0;
}

string infixToPrefix(string s)
{

	string ans = "";
	int i = 0;
	int n = s.length();
	stack<char> st;
	reverse(s.begin(), s.end());
	for (int j = 0; j < n; j++)
	{
		if (s[j] == '(')
			s[j] = ')';
		else if (s[j] == ')')
			s[j] = '(';
	}

	while (i < n)
	{
		if (isalnum(s[i]))
		{
			ans += s[i];
		}
		else if (s[i] == '(')
		{
			st.push(s[i]);
		}
		else if (s[i] == ')')
		{

			while (!st.empty() && st.top() != '(')
			{
				ans += st.top();
				st.pop();
			}
			st.pop();
		}
		else
		{
			while (!st.empty() && priority(s[i]) <= priority(st.top()))
			{
				ans += st.top();
				st.pop();
			}
			st.push(s[i]);
		}
		i++;
	}

	while (!st.empty())
	{
		ans += st.top();
		st.pop();
	}

	reverse(ans.begin(), ans.end());

	return ans;
}

int main()
{
	string infix = "(A+B)*(C-D)";
	cout << "Prefix: " << infixToPrefix(infix) << endl;
	return 0;
}
