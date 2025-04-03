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

int inorderSuccessor(Node *root, int key)
{
    int successor = -1;

    while (root)
    {

        if (root->data > key)
        {
            successor = root->data;
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return successor;
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

    cout << inorderSuccessor(root, 5);

    return 0;
}
