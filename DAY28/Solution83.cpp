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

int lengthLoop(Node *head)
{
	Node *temp = head;
	unordered_map<Node *, int> mapNode;
	int count = 1;

	while (temp != NULL)
	{
		if (mapNode.find(temp) != mapNode.end())
		{
			int val = mapNode[temp];
			cout << "value :" << val << endl;

			return count - val;
		}

		mapNode[temp] = count;
		count++;

		temp = temp->next;
	}
	return 0;
}

int lengthLoop1(Node *head)
{

	Node *slow = head;
	Node *fast = head;
	while (fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			int count = 1;
			Node *temp = slow;
			while (temp->next != slow)
			{
				count++;
				temp = temp->next;
			}
			return count;
		}
	}
	return 0;
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
	Node *head = new Node(1);
	Node *second = new Node(2);
	Node *third = new Node(3);
	Node *fourth = new Node(4);
	Node *fifth = new Node(5);

	head->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = fifth;
	fifth->next = NULL;

	cout << lengthLoop1(head);

	return 0;
}
