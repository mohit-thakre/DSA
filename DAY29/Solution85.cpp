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

Node *deleteMiddle(Node *&head)
{
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	Node *slow = head;
	Node *fast = head;
	Node *prev = NULL;
	while (fast != NULL && fast->next != NULL)
	{
		prev = slow;
		slow = slow->next;
		fast = fast->next->next;
	}

	if (prev != NULL)
		prev->next = slow->next;

	delete slow;
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

	head->next = second;
	second->next = nullptr;

	print(head);
	deleteMiddle(head);
	print(head);

	return 0;
}
