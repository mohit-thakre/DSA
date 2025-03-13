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
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void leftToRightLevel(Node *root)
{

    queue<Node *> qe;
    qe.push(root);

    while (!qe.empty())
    {
        Node *front = qe.front();
        qe.pop();
        cout << front->data << " ";
        if (front->left)
        {
            qe.push(front->left);
        }
        if (front->right)
        {
            qe.push(front->right);
        }
    }
}

void leftToRightLevel_newLine(Node *root)
{

    queue<Node *> qe;
    qe.push(root);
    qe.push(NULL);

    while (!qe.empty())
    {
        Node *front = qe.front();
        qe.pop();

        if (!front)
        {
            cout << endl;
            if (!qe.empty())
            {
                qe.push(NULL);
            }
        }
        else
        {

            cout << front->data << " ";
            if (front->left)
            {
                qe.push(front->left);
            }
            if (front->right)
            {
                qe.push(front->right);
            }
        }
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

    leftToRightLevel_newLine(root);

    return 0;
}