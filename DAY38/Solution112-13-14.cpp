#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

class Node
{
public:
	int data;
	Node *left;
	Node *right;

	Node(int val)
	{
		this->data = val;
		this->left = NULL;
		this->right = NULL;
	}
};

Node *createNode(int value)
{

	if (value == -1)
	{
		return NULL;
	}
	else
	{
		Node *root = new Node(value);

		root->left = createNode(-1);

		root->right = createNode(-1);
		return root;
	}
}

void preOrderTraversal(Node *root)
{
	// NLR
	if (root == NULL)
	{
		return;
	}

	cout << root->data << "  ";

	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}

void postOrderTraversal(Node *root)
{

	if (root == NULL)
	{
		return;
	}
	postOrderTraversal(root->left);
	postOrderTraversal(root->right);
	cout << root->data << " ";
}

void inOrderTraversal(Node *root)
{

	if (root == NULL)
	{
		return;
	}
	inOrderTraversal(root->left);
	cout << root->data << " ";
	inOrderTraversal(root->right);
}

int main()
{
	Node *root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	root->right->left = createNode(6);
	root->right->right = createNode(7);

	cout << "Pre-order Traversal: ";
	preOrderTraversal(root);
	cout << endl;

	cout << "Post-order Traversal: ";
	postOrderTraversal(root);
	cout << endl;

	cout << "In-order Traversal: ";
	inOrderTraversal(root);
	cout << endl;

	return 0;
}
