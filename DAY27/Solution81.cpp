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
Node *reverse(Node *&head, Node *&tail)
{
	if (head == NULL || head->next == NULL)
		return head;
	else
	{
		Node *prev = NULL;
		Node *current = head;
		Node *next = NULL;

		while (current != NULL)
		{
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}

		tail = head;
		head = prev;
	}
	return head;
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

int main()
{
	Node *head = NULL;
	Node *tail = NULL;
	insert(1, head, tail);
	insert(2, head, tail);
	insert(3, head, tail);
	reverse(head, tail);

	print(head);

	return 0;
}
