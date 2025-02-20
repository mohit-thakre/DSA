#include <iostream>
#include <vector>
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
Node *merge(Node *l1, Node *l2)
{

	Node *temp = l1;

	if (l1 == NULL)
		return l2;
	if (l2 == NULL)
		return l1;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = l2;
	return l1;
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
	Node *head1 = new Node(1);
	Node *second1 = new Node(2);
	Node *third1 = new Node(3);

	head1->next = second1;
	second1->next = third1;
	third1->next = nullptr;

	Node *head2 = new Node(4);
	Node *second2 = new Node(5);
	Node *third2 = new Node(6);

	head2->next = second2;
	second2->next = third2;
	third2->next = nullptr;

	Node *newHead = merge(head1, head2);
	print(newHead);
	return 0;
}
