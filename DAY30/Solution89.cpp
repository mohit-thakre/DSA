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
Node *addList(Node *head1, Node *head2)
{
	Node *newNode = new Node(-1);
	Node *temp = newNode;
	int carry = 0;
	while (head1 != NULL || head2 != NULL || carry)
	{
		int sum = 0;
		if (head1)
		{
			sum += head1->data;
			head1 = head1->next;
		}
		if (head2)
		{
			sum += head2->data;
			head2 = head2->next;
		}
		sum += carry;
		carry = sum / 10;
		Node *newNode = new Node(sum % 10);
		temp->next = newNode;
		temp = temp->next;
	}
	return newNode->next;
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
	Node *head1 = new Node(1);
	Node *second1 = new Node(2);
	Node *third1 = new Node(4);
	head1->next = second1;
	second1->next = third1;
	third1->next = NULL;

	Node *head2 = new Node(2);
	Node *second2 = new Node(1);
	Node *third2 = new Node(11);
	head2->next = second2;
	second2->next = third2;
	third2->next = NULL;

	Node *result = addList(head1, head2);
	print(result);

	return 0;
}
