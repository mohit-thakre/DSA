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

Node *nodeToDelete(Node *&head, Node *&tail)
{

	if (head == NULL && head->next == NULL)
	{
		return NULL;
	}

	Node *temp = head;
	while (temp->next->next != NULL)
	{
		temp = temp->next;
	}

	Node *deleteTail = temp->next;
	temp->next = NULL;
	tail = temp;
	delete deleteTail;
}

int main()
{
	Node *head = NULL;
	Node *tail = NULL;
	insert(1, head, tail);
	insert(2, head, tail);
	insert(3, head, tail);
	nodeToDelete(head, tail);
	print(head);

	return 0;
}
