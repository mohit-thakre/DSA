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
        left = right = NULL;
    }
};

Node *insert(Node *root, int v)
{

    if (!root)
        return new Node(v);

    while (true)
    {
        if (root->data < v)
        {

            if (!root->right)
            {
                root->right = new Node(v);
                break;
            }
            else
            {

                root = root->right;
            }
        }

        else
        {
            if (!root->left)
            {
                root->left = new Node(v);
                break;
            }
            else
            {
                root = root->left;
            }
        }
    }
}

int main()
{
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    insert(root, 9);
    cout << root->right->right->right->data;
    return 0;
}
