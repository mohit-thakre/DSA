#include <iostream>
#include <stack>

using namespace std;

class MinStack
{
private:
	stack<pair<int, int>> st;

public:
	void push(int x)
	{
		if (st.empty())
		{
			st.push({x, x});
		}
		else
		{
			st.push({x, min(x, st.top().second)});
		}
	}

	void pop()
	{
		if (!st.empty())
		{
			st.pop();
		}
	}

	int top()
	{
		if (!st.empty())
		{
			return st.top().first;
		}
		return -1;
	}

	int getMin()
	{
		if (!st.empty())
		{
			return st.top().second;
		}
		return -1;
	}
};

int main()
{
	MinStack minStack;

	minStack.push(-2);
	minStack.push(0);
	minStack.push(-3);

	cout << "Minimum: " << minStack.getMin() << endl;
	minStack.pop();
	cout << "Top: " << minStack.top() << endl;
	cout << "Minimum: " << minStack.getMin() << endl;

	return 0;
}
