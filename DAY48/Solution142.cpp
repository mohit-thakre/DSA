#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
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

int LCA(Node *root, Node *p, Node *q)
{

    while (root)
    {
        if (p->data < root->data && q->data < root->data)
        {
            root = root->left;
        }
        else if (p->data > root->data && q->data > root->data)
        {
            root = root->right;
        }
        else
        {
            break;
        }
    }
    return root->data;
}

int main()
{
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    Node *p = root->left->left;
    Node *q = root->left->right;
    cout << LCA(root, p, q);

    return 0;
}