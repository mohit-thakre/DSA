#include <iostream>
#include <stack>
using namespace std;

string postfixToPrefix(string s)
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

			string expression = s[i] + t2 + t1;
			st.push(expression);
		}
	}
	return st.top();
}

int main()
{
	string postfix = "abc*+";
	cout << "prefix: " << postfixToPrefix(postfix) << endl;
	return 0;
}
