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

int topView(Node *root)
{

    queue<pair<Node *, int>> qe;
    map<int, int> topNode;

    qe.push({root, 0});
    while (!qe.empty())
    {

        auto it = qe.front();
        qe.pop();

        Node *node = it.first;
        int value = it.second;

        if (topNode.find(value) == topNode.end())
        {

            topNode[value] = node->data;
        }
        if (node->left)
        {
            qe.push({node->left, value - 1});
        }
        if (node->right)
        {
            qe.push({node->right, value + 1});
        }
    }
    for (auto it : topNode)
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

    topView(root);

    return 0;
}