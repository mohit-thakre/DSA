#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class minHeap
{
    vector<int> heap;

    void heapifyUp(int index)
    {

        while (index > 0 && heap[index] < heap[(index - 1) / 2])
        {

            swap(heap[index], heap[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    void heapifyDown(int index)
    {

        int small = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < heap.size() && heap[left] < heap[small])
        {
            small = left;
        }
        if (right < heap.size() && heap[right] < heap[small])
        {
            small = right;
        }

        if (small != index)
        {
            swap(heap[index], heap[small]);
            heapifyDown(small);
        }
    }

public:
    void insert(int val)
    {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    void deletefromHeap()
    {
        if (heap.empty())
            cout << "heap is empty";
        else
        {
            swap(heap[0], heap[heap.size() - 1]);
            heap.pop_back();
            heapifyDown(0);
        }
    }

    void extractMin()
    {
        if (heap.empty())
        {
            cout << "heap is empty";
            return;
        }

        int min = heap[0];
        cout << min;

        deletefromHeap();
    }
    void print()
    {
        for (int val : heap)
        {
            cout << val << " ";
        }
    }
};

int main()
{
    minHeap p;
    p.insert(50);
    p.insert(60);
    p.insert(40);
    p.insert(80);
    p.insert(20);
    p.insert(10);
    p.print();
    cout << endl;
    p.deletefromHeap();
    cout << endl;
    p.print();
    cout << endl;
    p.extractMin();

    return 0;
}