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

void preOrderTraversal(Node *root, vector<int> &res)
{

    if (root == NULL)
    {
        return;
    }

    res.push_back(root->data);

    preOrderTraversal(root->left, res);
    preOrderTraversal(root->right, res);
}

bool isSameTree(Node *r1, Node *r2)
{

    vector<int> res;
    vector<int> res1;

    preOrderTraversal(r1, res);
    preOrderTraversal(r2, res1);

    return res == res1;
}

bool isSameTree1(Node *r1, Node *r2)
{

    if (!r1 && !r2)
    {
        return true;
    }
    if (!r1 || !r2)
    {
        return false;
    }
    if (r1->data != r2->data)
        return false;

    return isSameTree1(r1->left, r2->left) && isSameTree1(r1->right, r2->right);
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

    Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right->left = new Node(6);
    root1->right->right = new Node(7);

    cout << (isSameTree1(root, root1) ? "Identical" : "Not Identical");

    return 0;
}
