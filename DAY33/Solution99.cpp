#include <iostream>
#include <stack>
using namespace std;

class Queue
{

	stack<int> s1, s2;

public:
	void push(int x)
	{
		s1.push(x);
	}

	int pop()
	{
		if (s2.empty() && s1.empty())
		{
			cout << "stack is empty";
			return -1;
		}
		if (s2.empty())
		{
			while (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		if (!s2.empty())
		{
			int ft = s2.top();
			s2.pop();
			return ft;
		}
	}
	int top()
	{
		if (s2.empty())
		{
			while (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}

		return s2.top();
	}
	bool isEmpty()
	{
		return s1.empty() && s2.empty();
	}
};

int main()
{
	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);

	cout << "Dequeued: " << q.pop() << endl;
	cout << "Front: " << q.top() << endl;
	cout << "Dequeued: " << q.pop() << endl;
	cout << "Dequeued: " << q.pop() << endl;

	return 0;
}
