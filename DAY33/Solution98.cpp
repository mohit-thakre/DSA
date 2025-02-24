#include <iostream>
#include <queue>
using namespace std;

class Stack
{

	queue<int> q;

public:
	void push(int x)
	{
		q.push(x);
		int size = q.size();
		for (int i = 1; i < size; i++)
		{
			q.push(q.front());
			q.pop();
		}
	}
	int pop()
	{

		if (q.empty())
		{

			cout << "stack is underflow";
			return -1;
		}
		q.pop();
	}

	bool isEmpty()
	{

		return q.empty();
	}
	int top()
	{
		if (q.empty())
		{
			cout << "Stack is Empty";
			return -1;
		}
		return q.front();
	}
	int size()
	{
		return q.size();
	}
};

int main()
{

	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.top();

	return 0;
}