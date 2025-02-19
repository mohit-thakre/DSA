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

Node *findMiddle(Node *head)
{
	Node *slow = head;
	Node *fast = head->next;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}

Node *sortLL(Node *&head)
{

	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	vector<int> arr;
	Node *temp = head;
	while (temp != NULL)
	{
		arr.push_back(temp->data);
		temp = temp->next;
	}
	sort(arr.begin(), arr.end());
	temp = head;
	for (int i = 0; i < arr.size(); i++)
	{
		temp->data = arr[i];
		temp = temp->next;
	}
}

Node *merge(Node *left, Node *right)
{
	if (!left)
		return right;
	if (!right)
		return left;

	if (left->data < right->data)
	{
		left->next = merge(left->next, right);
		return left;
	}
	else
	{
		right->next = merge(left, right->next);
		return right;
	}
}

Node *sortLL1(Node *head)
{
	if (head == nullptr || head->next == nullptr)
		return head;

	Node *mid = findMiddle(head);
	Node *leftHead = head;
	Node *rightHead = mid->next;
	mid->next = nullptr;

	leftHead = sortLL1(leftHead);
	rightHead = sortLL1(rightHead);

	return merge(leftHead, rightHead);
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
	Node *head = new Node(3);
	Node *second = new Node(2);
	Node *third = new Node(22);
	Node *fourth = new Node(22);

	head->next = second;
	second->next = third;
	third->next = nullptr;
	fourth->next = nullptr;

	Node *newHead = sortLL1(head);
	print(newHead);

	return 0;
}
