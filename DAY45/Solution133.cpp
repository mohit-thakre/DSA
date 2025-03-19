#include <iostream>
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
        data = val;
        left = right = NULL;
    }
};

bool isValidBST(Node *root, long min, long max)
{

    if (!root)
    {
        return true;
    }

    if (root->data >= max || root->data <= min)
    {
        return false;
    }

    return isValidBST(root->left, min, root->data) && isValidBST(root->right, root->data, max);
}

bool print(Node *root)
{
    return isValidBST(root, INT16_MIN, INT16_MAX);
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

    cout << print(root);
    return 0;
}
