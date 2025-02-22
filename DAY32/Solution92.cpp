#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	Node(int d)
	{
		data = d;
		next = nullptr;
	}
};

class Stack
{
private:
	Node *top;
	int size;

public:
	Stack()
	{
		top = nullptr;
		size = 0;
	}

	void push(int x)
	{
		Node *newNode = new Node(x);
		newNode->next = top;
		top = newNode;
		size++;
	}

	int pop()
	{
		if (top == nullptr)
		{
			cout << "Stack Underflow" << endl;
			return -1;
		}

		Node *nodeToDelete = top;
		int data = top->data;
		top = top->next;
		delete nodeToDelete;
		size--;
		return data;
	}

	int Top()
	{
		if (top == nullptr)
		{
			cout << "Stack is empty" << endl;
			return -1;
		}
		return top->data;
	}

	int getSize()
	{
		return size;
	}

	bool isEmpty()
	{
		return top == nullptr;
	}
};

int main()
{
	Stack s;

	s.push(10);
	s.push(20);
	s.push(30);

	cout << "Top element" << s.Top() << endl;
	cout << "Stack size " << s.getSize() << endl;

	return 0;
}
