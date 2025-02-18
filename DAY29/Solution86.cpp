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

	head = prev;
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

bool isPalindrome(Node *head)
{
	Node *slow = head;
	Node *fast = head;
	Node *temp = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	Node *newHead = reverse(slow);
	Node *first = head;
	Node *second = newHead;
	while (second != NULL)
	{
		if (first->data != second->data)
		{
			reverse(newHead);
			return false;
		}
		first = first->next;
		second = second->next;
	}
	reverse(newHead);
	return true;
}

int main()
{
	Node *head = new Node(1);
	Node *second = new Node(2);
	Node *third = new Node(4);
	Node *fourth = new Node(2);
	Node *fifth = new Node(1);
	Node *sixth = new Node(11);

	head->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = fifth;
	fifth->next = NULL;
	sixth->next = NULL;

	cout << isPalindrome(head);

	return 0;
}
