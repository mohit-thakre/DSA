#include <iostream>
#include <unordered_map>
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
Node *removeNthLast(Node *head, int pos)
{

	int count = 0;
	Node *temp = head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	int position = count - pos;
	temp = head;
	if (position == 0)
	{
		Node *nodeToDelete = temp;
		head = temp->next;
		nodeToDelete->next = nullptr;
		delete nodeToDelete;
		return head;
	}

	while (position > 0)
	{
		temp = temp->next;
		position--;
	}

	Node *nodeToDelete = temp->next;
	temp->next = nodeToDelete->next;
	nodeToDelete->next = nullptr;
	delete nodeToDelete;
	return head;
}

Node *removeNthLast1(Node *head, int pos)
{

	Node *slow = head;
	Node *fast = head;

	for (int i = 0; i < pos; i++)
	{
		fast = fast->next;
	}
	if (fast == NULL)
	{
		Node *nodeToDelete = head;
		head = head->next;
		delete nodeToDelete;
		return head;
	}
	while (fast->next != NULL)
	{
		fast = fast->next;
		slow = slow->next;
	}
	Node *nodeToDelete = slow->next;
	slow->next = nodeToDelete->next;
	delete nodeToDelete;
	return head;
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
	Node *head = new Node(1);
	Node *second = new Node(2);
	Node *third = new Node(3);
	Node *fourth = new Node(4);
	Node *fifth = new Node(5);

	head->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = fifth;
	fifth->next = nullptr;

	Node *newHead = removeNthLast1(head, 3);
	print(newHead);
	return 0;
}
