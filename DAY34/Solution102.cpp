#include <iostream>
#include <stack>
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

string infixToPostfix(string s)
{

	stack<char> st;
	string ans = "";
	int i = 0;
	int n = s.length();

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
	return ans;
}

int main()
{
	cout << infixToPostfix("a+b*(c^d-e)^(f+g*h)-i") << endl;
	return 0;
}