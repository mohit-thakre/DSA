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

int height(Node *root)
{

    if (!root)
    {
        return 0;
    }

    int l = height(root->left);
    int r = height(root->right);

    int maxi = max(l, r);
    return 1 + maxi;
}

bool balancedTree(Node *root)
{

    if (!root)
    {
        return true;
    }

    int l = height(root->left);
    int r = height(root->right);

    if (abs(l - r) > 1)
    {
        return false;
    }
    return balancedTree(root->left) && balancedTree(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << balancedTree(root);
    return 0;
}