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
Node *startingNode(Node *head)
{
	unordered_map<Node *, int> mapNode;
	Node *temp = head;
	int count = 1;
	while (temp != NULL)
	{
		if (mapNode.find(temp) != mapNode.end())
		{
			return temp;
		}
		mapNode[temp] = count;
		count++;
		temp = temp->next;
	}
	return NULL;
}

Node *startingNode1(Node *head)
{

	Node *slow = head;
	Node *fast = head;

	while (fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{

			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
				if (slow == fast)
				{
					return slow;
				}
			}
		}
	}
	return NULL;
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
	fifth->next = second;

	cout << startingNode1(head)->data;
	return 0;
}
