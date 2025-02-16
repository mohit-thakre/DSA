#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *prev;
	Node *next;
	Node(int value)
	{

		data = value;
		prev = NULL;
		next = NULL;
	}
};

Node *insetAtEnd(int value, Node *&head, Node *&tail)
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
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}
}

Node *findMiddle(Node *&head, Node *&tail)
{
	Node *temp = head;
	int count = 0;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	int mid = (count / 2) + 1;
	temp = head;
	while (temp != NULL)
	{
		mid = mid - 1;
		if (mid == 0)
		{
			break;
		}
		temp = temp->next;
	}
	return temp;
}

Node *findMiddle1(Node *&head, Node *&tail)
{
	Node *slow = head;
	Node *fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
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
	Node *head = NULL;
	Node *tail = NULL;
	insetAtEnd(10, head, tail);
	insetAtEnd(20, head, tail);
	insetAtEnd(30, head, tail);
	insetAtEnd(40, head, tail);
	Node *middle = findMiddle1(head, tail);
	cout << middle->data;
	return 0;
}
