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

Node *insert(int value, Node *&head, Node *&tail)
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
		newNode->next = head;
		head = newNode;
	}
}

void print(Node *head)
{
	Node *temp = head;
	while (head != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}

int search(Node *head, int t)
{

	Node *temp = head;

	if (head == NULL)
	{
		return false;
	}
	while (temp != NULL)
	{
		if (temp->data == t)
		{
			return true;
		}
		temp = temp->next;
	}
	return false;
}

int main()
{
	Node *head = NULL;
	Node *tail = NULL;
	insert(1, head, tail);
	insert(2, head, tail);
	insert(3, head, tail);

	cout << search(head, 025);

	return 0;
}
