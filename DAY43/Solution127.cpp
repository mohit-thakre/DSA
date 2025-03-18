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

bool isLeaf(Node *root)
{
    return root && !root->left && !root->right;
}

void addLeaf(Node *root, vector<int> &res)
{
    if (!root)
        return;

    if (isLeaf(root))
    {
        res.push_back(root->data);
        return;
    }
    if (root->left)
        addLeaf(root->left, res);
    if (root->right)
        addLeaf(root->right, res);
}

void addLeftBoundary(Node *root, vector<int> &res)
{

    while (root)
    {
        if (!isLeaf(root))
        {
            res.push_back(root->data);
        }
        if (root->left)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
}

void addRightBoundary(Node *root, vector<int> &res)
{
    vector<int> temp;

    while (root)
    {
        if (!isLeaf(root))
            temp.push_back(root->data);

        if (root->right)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }

    for (int i = temp.size() - 1; i >= 0; i--)
        res.push_back(temp[i]);
}

void print(Node *root)
{
    vector<int> res;
    if (!root)
    {
        return;
    }

    if (!isLeaf(root))
    {
        res.push_back(root->data);
    }
    addLeftBoundary(root->left, res);
    addLeaf(root, res);
    addRightBoundary(root->right, res);

    for (int val : res)
    {
        cout << val << " ";
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
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);
    root->right->right->left = new Node(10);
    root->right->right->right = new Node(11);

    print(root);

    return 0;
}