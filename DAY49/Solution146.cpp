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

vector<int> mergedArray(vector<int> &arr1, vector<int> &arr2)
{

    int i = 0;
    int j = 0;
    vector<int> merged;

    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            merged.push_back(arr1[i++]);
        }
        else
        {
            merged.push_back(arr2[j++]);
        }
    }
    while (i < arr1.size())
    {

        merged.push_back(arr1[i++]);
    }
    while (j < arr2.size())
    {

        merged.push_back(arr2[j++]);
    }

    return merged;
}

Node *sortedArr(vector<int> arr, int s, int e)
{

    if (s > e)
    {
        return NULL;
    }

    int mid = (s + e) / 2;
    Node *root = new Node(arr[mid]);

    root->left = sortedArr(arr, s, mid - 1);
    root->right = sortedArr(arr, mid + 1, e);

    return root;
}

Node *mergedTree(Node *r1, Node *r2)
{
    vector<int> arr1, arr2;

    inorder(r1, arr1);
    inorder(r2, arr2);

    vector<int> mergedarr = mergedArray(arr1, arr2);

    return sortedArr(mergedarr, 0, mergedarr.size() - 1);
}

int main()
{
    Node *root1 = new Node(4);
    root1->left = new Node(2);
    root1->right = new Node(6);
    root1->left->left = new Node(1);
    root1->left->right = new Node(3);

    Node *root2 = new Node(7);
    root2->left = new Node(5);
    root2->right = new Node(8);

    Node *mergedRoot = mergedTree(root1, root2);

    cout << mergedRoot->right->right->right->data;

    return 0;
}
