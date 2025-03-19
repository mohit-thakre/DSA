#include <iostream>
#include <queue>
#include <stack>

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

int max(Node *root)
{

    if (!root)
    {
        return root->data;
    }

    if (root->right)
    {

        return max(root->right);
    }
    else
    {
        return root->data;
    }
}

int max_iterative(Node *root)
{

    while (root->right)
    {
        root = root->right;
    }
    return root->data;
}

int min(Node *root)
{

    if (!root)
    {
        return root->data;
    }
    if (root->left)
    {
        return min(root->left);
    }
    else
    {
        return root->data;
    }
}

int min_iterative(Node *root)
{
    while (root->left)
    {
        root = root->left;
    }
    return root->data;
}

void minMax(Node *root)
{
    if (!root)
    {
        cout << "Tree is empty" << endl;
        return;
    }

    int minValue = min_iterative(root);
    int maxValue = max_iterative(root);

    cout << minValue << endl;
    cout << maxValue << endl;
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

    cout << min_iterative(root);

    return 0;
}
