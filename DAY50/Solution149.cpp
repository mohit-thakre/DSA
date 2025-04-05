#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class maxHeap
{
    vector<int> heap;

    void heapifyUp(int index)
    {

        while (index > 0 && heap[index] > heap[(index - 1) / 2])
        {

            swap(heap[index], heap[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    void heapifyDown(int index)
    {

        int lar = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < heap.size() && heap[left] > heap[lar])
        {
            lar = left;
        }
        if (right < heap.size() && heap[right] > heap[lar])
        {
            lar = right;
        }

        if (lar != index)
        {
            swap(heap[index], heap[lar]);
            heapifyDown(lar);
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

    void extractMax()
    {
        if (heap.empty())
        {
            cout << "heap is empty";
            return;
        }

        int max = heap[0];
        cout << max;

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
    maxHeap p;
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

    return 0;
}