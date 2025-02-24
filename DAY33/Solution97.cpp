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

class Queue
{
	Node *front;
	Node *rear;
	int size;

public:
	Queue()
	{
		front = nullptr;
		rear = nullptr;
		size = 0;
	}

	void enqueue(int x)
	{
		Node *newNode = new Node(x);
		if (size == 0)
		{
			front = newNode;
			rear = newNode;
		}
		else
		{
			rear->next = newNode;
			rear = newNode;
		}

		size++;
	}

	int dequeue()
	{
		if (size == 0)
		{
			cout << "Queue is underflow" << endl;
			return -1;
		}

		Node *nodeToDelete = front;
		front = front->next;

		if (front == nullptr)
		{
			rear = nullptr;
		}

		int x = nodeToDelete->data;
		delete nodeToDelete;

		size--;

		return x;
	}

	int getSize()
	{
		return size;
	}
	bool isEmpty()
	{
		return size == 0;
	}

	int top()
	{
		return rear->data;
	}
};

int main()
{
	Queue s;

	cout << s.isEmpty();

	return 0;
}
