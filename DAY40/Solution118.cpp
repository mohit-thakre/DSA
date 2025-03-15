#include <iostream>
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

void postOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    stack<Node *> s1, s2;
    s1.push(root);
    while (!s1.empty())
    {
        Node *curr = s1.top();
        s1.pop();
        s2.push(curr);
        if (curr->left)
            s1.push(curr->left);
        if (curr->right)
            s1.push(curr->right);
    }

    while (!s2.empty())
    {
        cout << s2.top()->data << " ";
        s2.pop();
    }
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

    postOrderTraversal(root);

    return 0;
}