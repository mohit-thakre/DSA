#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

string prefixToInfix(string s)
{
	stack<string> st;
	int n = s.length();
	reverse(s.begin(), s.end());

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

			string expression = "(" + t1 + s[i] + t2 + ")";
			st.push(expression);
		}
	}
	string ans = st.top();

	return ans;
}

int main()
{
	string prefix = "*+abc";
	cout << "infix: " << prefixToInfix(prefix) << endl;
	return 0;
}
