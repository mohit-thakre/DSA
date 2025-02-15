#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *prev;
	Node *next;
	Node(int value)
	{

		data = value;
		prev = NULL;
		next = NULL;
	}
};

Node *insetAtEnd(int value, Node *&head, Node *&tail)
{

	if (head == NULL && tail == NULL)
	{
		Node *newNode = new Node(value);
		head = newNode;
		tail = newNode;
	}
	else
	{
		Node *newNode = new Node(value);
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}

int main()
{
	Node *head = NULL;
	Node *tail = NULL;
	insetAtEnd(10, head, tail);
	insetAtEnd(20, head, tail);
	print(head);
	return 0;
}
