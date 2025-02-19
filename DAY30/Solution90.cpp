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
Node *segregate(Node *head)
{

	Node *temp = head;
	vector<int> arr;

	if (head == NULL || head->next == NULL)
	{
		return head;
	}

	while (temp != NULL && temp->next != NULL)
	{
		arr.push_back(temp->data);
		temp = temp->next->next;
	}
	if (temp)
		arr.push_back(temp->data);
	temp = head->next;
	while (temp != NULL && temp->next != NULL)
	{
		arr.push_back(temp->data);
		temp = temp->next->next;
	}
	temp = head;
	for (int i = 0; i < arr.size(); i++)
	{
		temp->data = arr[i];
		temp = temp->next;
	}
	return head;
}

Node *segregate1(Node *head)
{
	if (head == NULL || head->next == NULL)
		return head;

	Node *odd = head;
	Node *even = head->next;
	Node *evenHead = even;

	while (even != NULL && even->next != NULL)
	{
		odd->next = odd->next->next;
		even->next = even->next->next;

		odd = odd->next;
		even = even->next;
	}
	odd->next = evenHead;
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

	Node *newHead = segregate1(head);
	print(newHead);
	return 0;
}
