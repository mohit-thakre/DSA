#include <iostream>
#include <vector>
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

bool twoSum(Node *root, int key)
{

    vector<int> arr;

    inorder(root, arr);

    int p = 0;
    int q = arr.size() - 1;

    while (p < q)
    {
        if (key == arr[p] + arr[q])
        {
            return true;
        }
        if (key > arr[p] + arr[q])
        {
            p++;
        }
        else
        {
            q--;
        }
    }
    return false;
}

int main()
{

    Node *root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);
    root->left->left = new Node(20);
    root->left->right = new Node(40);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    cout << twoSum(root, 90);
    return 0;
}