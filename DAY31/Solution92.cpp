#include <iostream>
#include <algorithm>
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

Node *reverse(Node *head)
{

	if (head == NULL || head->next == NULL)
	{
		return head;
	}

	Node *newHead = reverse(head->next);
	Node *front = head->next;

	front->next = head;
	head->next = NULL;
	return newHead;
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
	Node *head = new Node(0);
	Node *second = new Node(0);
	Node *third = new Node(2);
	Node *fourth = new Node(2);

	head->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = nullptr;

	Node *newHead = reverse(head);
	print(newHead);

	return 0;
}
