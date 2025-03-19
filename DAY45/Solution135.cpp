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

bool search(Node *root, int t)
{

    if (!root)
    {
        return false;
    }

    if (root->data == t)
    {
        return true;
    }
    else if (root->data > t)
    {
        return search(root->left, t);
    }
    else
    {
        return search(root->right, t);
    }
}

bool search_iterative(Node *root, int t)
{

    if (!root)
    {
        return false;
    }

    while (root)
    {

        if (root->data == t)
            return true;
        if (root->data > t)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return false;
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

    cout << search_iterative(root, 3);

    return 0;
}