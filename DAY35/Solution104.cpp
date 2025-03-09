#include <iostream>
#include <stack>
using namespace std;

string postfixToInfix(string s)
{
	stack<string> st;
	int n = s.length();

	for (int i = 0; i < n; i++)
	{

		if (isalnum(s[i]))
		{
			st.push(string(1, s[i]));
		}
		else
		{

			string t1 = st.top();
			st.pop();
			string t2 = st.top();
			st.pop();

			string expression = "(" + t2 + s[i] + t1 + ")";
			st.push(expression);
		}
	}
	return st.top();
}

int main()
{
	string postfix = "AB+C-";
	cout << "Infix: " << postfixToInfix(postfix) << endl;
	return 0;
}
