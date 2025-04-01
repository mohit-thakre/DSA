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

void inorder(Node *root, vector<int> &arr)
{
    if (!root)
        return;
    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}

void inorder1(Node *root, int &key, int &result)
{
    if (!root)
        return;
    inorder1(root->left, key, result);
    key--;

    if (key == 0)
    {
        result = root->data;
        return;
    }
    inorder1(root->right, key, result);
}

int kthSmall(Node *root, int key)
{
    vector<int> arr;

    inorder(root, arr);
    if (key > arr.size())
        return -1;
    return arr[key - 1];
}

int kthSmall1(Node *root, int key)
{

    int result = -1;
    inorder1(root, key, result);
    return result;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(13);
    root->left->left = new Node(3);
    root->left->left->left = new Node(2);
    root->left->left->right = new Node(4);
    root->left->right = new Node(6);
    root->left->right->right = new Node(9);
    root->right->left = new Node(11);
    root->right->right = new Node(14);

    cout << kthSmall1(root, 3);

    return 0;
}
