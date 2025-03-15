#include <iostream>
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

void inOrder(Node *root)
{
    stack<Node *> st;
    Node *current = root;

    while (true)
    {
        if (current != NULL)
        {
            st.push(current);
            current = current->left;
        }
        else
        {
            if (st.empty())
                break;
            current = st.top();
            st.pop();
            cout << current->data << " ";
            current = current->right;
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

    inOrder(root);

    return 0;
}