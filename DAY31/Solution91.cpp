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

Node *reverse(Node *head)
{
	Node *current = head;
	Node *prev = NULL;
	Node *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	return prev;
}

Node *addOneInList(Node *head)
{
	Node *newHead = reverse(head);
	Node *tempHead = newHead;

	Node *dummy = new Node(-1);
	Node *temp = dummy;
	int carry = 1;

	while (tempHead != NULL || carry)
	{
		int sum = carry;

		if (tempHead != NULL)
		{
			sum += tempHead->data;
			tempHead = tempHead->next;
		}

		carry = sum / 10;
		temp->next = new Node(sum % 10);
		temp = temp->next;
	}
	Node *head1 = reverse(dummy->next);
	return head1;
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
	Node *head1 = new Node(99);
	Node *second1 = new Node(9);
	Node *third1 = new Node(9);
	head1->next = second1;
	second1->next = third1;
	third1->next = NULL;

	Node *res = addOneInList(head1);
	print(res);

	return 0;
}
