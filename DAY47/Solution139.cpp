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

Node *minNode(Node *root)
{

    while (root && root->left)
    {
        root = root->left;
    }
    return root;
}

Node *deleteNode(Node *root, int key)
{
    if (!root)
        return root;

    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    else
    {

        if (!root->left && !root->right)
        {
            delete root;
            return NULL;
        }

        if (!root->left)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        if (!root->right)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        Node *min = minNode(root->right);
        root->data = min->data;
        root->right = deleteNode(root->right, min->data);
    }
    return root;
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

    cout << "Deleting 50..." << endl;
    root = deleteNode(root, 50);

    cout << root->data;
    return 0;
}