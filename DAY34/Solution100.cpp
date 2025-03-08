

#include <iostream>
#include <stack>
using namespace std;

bool balancedParenthesis(string s)
{
	stack<char> st;

	for (int i = 0; i < s.length(); i++)
	{
		char ch = s[i];

		if (ch == '(' || ch == '{' || ch == '[')
		{
			st.push(ch);
		}
		else
		{

			if (st.empty())
				return false;

			char top = st.top();

			if ((top == '(' && ch == ')') ||
				(top == '{' && ch == '}') ||
				(top == '[' && ch == ']'))
			{
				st.pop();
			}
			else
			{
				return false;
			}
		}
	}

	return st.empty();
}

int main()
{
	string test = "{[([)])]}";
	cout << balancedParenthesis(test) << endl;

	return 0;
}
