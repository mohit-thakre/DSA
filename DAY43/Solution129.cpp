#include <iostream>
#include <algorithm>

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

int height(Node *root)
{

    if (!root)
    {
        return 0;
    }

    int l = height(root->left);
    int r = height(root->right);

    int maxi = max(l, r);
    return 1 + maxi;
}

int diameter(Node *root)
{

    if (!root)
    {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    int dia = leftHeight + rightHeight + 1;

    int left = diameter(root->left);
    int right = diameter(root->right);

    return max(dia, max(left, right));
}

int diameter1(Node *root, int &maxi)
{
    if (!root)
        return 0;
    int left = diameter1(root->left, maxi);
    int right = diameter1(root->right, maxi);

    maxi = max(maxi, left + right + 1);

    return 1 + max(left, right);
}

int getDiameter(Node *root)
{
    int maxDiameter = 0;
    diameter1(root, maxDiameter);
    return maxDiameter;
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
    root->right->right->right = new Node(7);

    cout << getDiameter(root);

    return 0;
}
