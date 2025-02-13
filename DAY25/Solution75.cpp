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

int countLength(Node *head, Node *tail)
{
	int cnt = 0;
	Node *temp = head;
	while (temp != NULL)
	{
		cnt++;
		temp = temp->next;
	}
	return cnt;
}

int main()
{
	Node *head = NULL;
	Node *tail = NULL;
	insert(1, head, tail);
	insert(2, head, tail);
	insert(3, head, tail);

	cout << countLength(head, tail);

	return 0;
}
