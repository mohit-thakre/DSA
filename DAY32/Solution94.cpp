#include <iostream>
using namespace std;

class Stack
{
	int arr[1000];
	int top;

public:
	Stack()
	{
		top = -1;
	}

	void push(int value)
	{
		if (top >= 1000 - 1)
		{
			cout << "stack overflow";
			return;
		}
		top++;
		arr[top] = value;
	}
	int pop()
	{
		if (top == -1)
		{
			cout << "stack is underflow";
			exit(1);
		}
		int x = arr[top];
		top--;
		return x;
	}
	int size()
	{
		return top + 1;
	}
	int Top()
	{
		if (top == -1)
		{
			cout << "Stack is empty";
			return -1;
		}
		return arr[top];
	}
};

int main()
{
	Stack s;
	s.push(4);
	s.push(2);
	s.push(3);
	s.push(1);

	cout << "Popped element: " << s.pop() << endl;
	cout << "Popped element: " << s.pop() << endl;
	cout << "Popped element: " << s.pop() << endl;
	cout << "Popped element: " << s.pop() << endl;
	cout << "Popped element: " << s.pop() << endl;
	cout << "Current size: " << s.size() << endl;

	return 0;
}
