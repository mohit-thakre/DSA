#include <iostream>
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

int inorderPredecessor(Node *root, int key)
{

    int predecessor = -1;

    while (root)
    {
        if (root->data < key)
        {
            predecessor = root->data;
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    return predecessor;
}

int main()
{

    Node *root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);
    root->left->left = new Node(20);
    root->left->right = new Node(40);
    root->right->left = new Node(60);
    root->right->right = new Node(80);

    cout << inorderPredecessor(root, 80);
    return 0;
}