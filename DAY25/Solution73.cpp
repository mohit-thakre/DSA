#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	Node(int value)
	{
		data = value;
		next = NULL;
	}
};

Node *insertHead(int value, Node *&head, Node *&tail)
{
	Node *newNode = new Node(value);
	if (head == NULL && tail == NULL)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		newNode->next = head;
		head = newNode;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
}

int main()
{
	Node *head = NULL;
	Node *tail = NULL;

	insertHead(1, head, tail);
	print(head);

	return 0;
}
