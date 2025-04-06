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

    void heapifyDownMin(int index)
    {
        int smallest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < heap.size() && heap[left] < heap[smallest])
        {
            smallest = left;
        }
        if (right < heap.size() && heap[right] < heap[smallest])
        {
            smallest = right;
        }

        if (smallest != index)
        {
            swap(heap[index], heap[smallest]);
            heapifyDownMin(smallest);
        }
    }

public:
    void insert(int val)
    {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    void print()
    {
        for (int val : heap)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    void maxTomin()
    {

        for (int i = heap.size() / 2 - 1; i >= 0; i--)
        {
            heapifyDownMin(i);
        }
    }
};

int main()
{
    maxHeap heap;

    int arr[] = {90, 15, 10, 7, 12, 2};
    for (int val : arr)
    {
        heap.insert(val);
    }

    heap.maxTomin();

    heap.print();

    return 0;
}