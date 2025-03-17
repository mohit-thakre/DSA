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
        left = right = nullptr;
    }
};

bool Symmetrical(Node *root)
{
    if (!root)
        return true;

    queue<Node *> q1, q2;

    if ((!root->left && root->right) || (root->left && !root->right))
    {

        cout << "asdf";

        return false;
    }
    q1.push(root->left);
    q2.push(root->right);

    while (!q1.empty() && !q2.empty())
    {
        Node *node1 = q1.front();
        Node *node2 = q2.front();
        q1.pop();
        q2.pop();

        if (!node1 && !node2)
            continue;
        if (node1->data != node2->data)
            return false;

        q1.push(node1->left);
        q2.push(node2->right);

        q1.push(node1->right);
        q2.push(node2->left);
    }

    return true;
}

bool Symmetrical_recursive(Node *root1, Node *root2)
{

    if (!root1 || !root2)
    {
        return root1 == root2;
    }
    if (root1->data != root2->data)
    {
        return false;
    }

    return Symmetrical_recursive(root1->left, root2->right) && Symmetrical_recursive(root1->right, root2->left);
}

bool Symmetrical_recursive_print(Node *root)
{

    return root == NULL || Symmetrical_recursive(root->left, root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->right->right = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(4);

    cout << Symmetrical(root);

    return 0;
}
