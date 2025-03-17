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

int rightView(Node *root)
{

    queue<Node *> qe;
    map<int, int> topNode;

    qe.push(root);
    qe.push(NULL);
    int data;
    while (!qe.empty())
    {

        Node *node = qe.front();
        qe.pop();
        if (node)
        {
            data = node->data;
        }

        if (node == NULL)
        {
            cout << data << " ";
            if (!qe.empty())
            {
                qe.push(NULL);
            }
        }
        else
        {
            if (node->left)
            {
                qe.push(node->left);
            }
            if (node->right)
            {
                qe.push(node->right);
            }
        }
    }
}

int rightView1(Node *root)
{

    queue<Node *> qe;
    qe.push(root);

    while (!qe.empty())
    {
        int rightMost = 0;
        int s = qe.size();

        for (int i = 0; i < s; i++)
        {
            Node *node = qe.front();
            qe.pop();

            rightMost = node->data;

            if (node->left)
            {
                qe.push(node->left);
            }

            if (node->right)
            {
                qe.push(node->right);
            }
        }
        cout << rightMost << " ";
    }
}

void rightView2_recursive(Node *root, vector<int> &res, int level)
{

    if (root == NULL)
    {
        return;
    }
    if (level == res.size())
    {
        res.push_back(root->data);
    }

    rightView2_recursive(root->right, res, level + 1);
    rightView2_recursive(root->left, res, level + 1);
}

void print(Node *root)
{
    vector<int> res;
    rightView2_recursive(root, res, 0);
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
    root->left->left->left = new Node(4);

    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    print(root);

    return 0;
}