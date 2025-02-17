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

bool detectLoop(Node *head)
{
	std::unordered_map<Node *, int> mapNode;
	Node *temp = head;
	while (temp != NULL)
	{
		if (mapNode.find(temp) != mapNode.end())
			return true;
		mapNode[temp] = 1;
		temp = temp->next;
	}
	return false;
}

bool detectLoop1(Node *head)
{
	Node *slow = head;
	Node *fast = head;
	while (slow != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return true;
	}
	return false;
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

	cout << detectLoop1(head);

	return 0;
}
