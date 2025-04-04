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

Node *insert(Node *root, int val)
{
    if (!root)
        return new Node(val);

    else if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }
    return root;
}

Node *bst(vector<int> arr)
{

    int i = 0;
    Node *root = NULL;
    while (i < arr.size())
    {
        root = insert(root, arr[i++]);
    }

    return root;
}

int main()
{
    vector<int> arr = {4, 2, 6, 1, 3, 5, 7};
    Node *root = bst(arr);

    cout << root->right->right->data;

    return 0;
}