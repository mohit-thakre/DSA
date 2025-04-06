#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Node
{
public:
    int val;
    Node *left;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
    }
};

Node *mergeKLists(vector<Node *> &lists)
{

    priority_queue<int, vector<int>, greater<int>> pq;

    for (auto list : lists)
    {
        Node *current = list;
        while (current != NULL)
        {
            pq.push(current->val);
            current = current->left;
        }
    }

    Node *dummy = new Node(0);
    Node *tail = dummy;

    while (!pq.empty())
    {
        tail->left = new Node(pq.top());
        pq.pop();
        tail = tail->left;
    }

    return dummy->left;
}

int main()
{
    vector<Node *> lists;

    Node *list1 = new Node(1);
    list1->left = new Node(4);
    list1->left->left = new Node(5);

    Node *list2 = new Node(1);
    list2->left = new Node(3);
    list2->left->left = new Node(4);

    Node *list3 = new Node(2);
    list3->left = new Node(6);

    lists.push_back(list1);
    lists.push_back(list2);
    lists.push_back(list3);

    Node *mergedList = mergeKLists(lists);

    Node *current = mergedList;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->left;
    }
    cout << endl;

    return 0;
}