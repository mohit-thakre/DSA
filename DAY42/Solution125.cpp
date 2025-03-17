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

void leftView(Node *root)
{

    queue<Node *> qe;
    qe.push(root);
    qe.push(NULL);

    while (!qe.empty())
    {
        Node *node = qe.front();
        qe.pop();
        int data;
        if (node)
        {
            data = node->data;
        }

        if (!node)
        {
            cout << data << " ";

            if (!qe.empty())
            {
                qe.push(NULL);
            }
        }
        else
        {
            if (node->right)
            {
                qe.push(node->right);
            }
            if (node->left)
            {
                qe.push(node->left);
            }
        }
    }
}

void leftView1(Node *root)
{

    queue<Node *> qe;
    qe.push(root);

    while (!qe.empty())
    {
        int s = qe.size();
        int leftMost = 0;
        for (int i = 0; i < s; i++)
        {
            Node *node = qe.front();
            qe.pop();
            leftMost = node->data;

            if (node->right)
            {
                qe.push(node->right);
            }
            if (node->left)
            {
                qe.push(node->left);
            }
        }
        cout << leftMost << " ";
    }
}

void leftMost_recursion(Node *root, vector<int> &res, int level)
{

    if (!root)
    {
        return;
    }
    if (level == res.size())
    {
        res.push_back(root->data);
    }
    leftMost_recursion(root->left, res, level + 1);
    leftMost_recursion(root->right, res, level + 1);
}

void print(Node *root)
{
    vector<int> res;
    leftMost_recursion(root, res, 0);
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
    root->right->right->right = new Node(7);

    print(root);

    return 0;
}
