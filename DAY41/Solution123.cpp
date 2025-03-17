#include <iostream>
#include <map>
#include <queue>
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

void bottomView(Node *root)
{

    if (!root)
    {
        return;
    }

    map<int, int> treeNode;
    queue<pair<Node *, int>> qe;

    qe.push({root, 0});

    while (!qe.empty())
    {
        auto it = qe.front();
        qe.pop();
        Node *node = it.first;
        int hd = it.second;

        treeNode[hd] = node->data;

        if (node->left)
        {
            qe.push({node->left, hd - 1});
        }
        if (node->right)
        {
            qe.push({node->right, hd + 1});
        }
    }

    for (auto it : treeNode)
    {
        cout << it.second << " ";
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

    cout << "bottom view :" << endl;
    bottomView(root);

    return 0;
}
