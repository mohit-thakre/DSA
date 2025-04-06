#include <iostream>
#include <queue>
using namespace std;

int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> pq;
    for (int val : nums)
    {
        pq.push(val);
    }

    for (int i = 0; i < k - 1; ++i)
    {
        pq.pop();
    }

    return pq.top();
}

int findKthSmallest(vector<int> &nums, int k)
{
    priority_queue<int> pq;
    for (int val : nums)
    {
        pq.push(val);
    }

    for (int i = 0; i < nums.size() - k; i++)
    {
        pq.pop();
    }

    return pq.top();
}

int main()
{
    vector<int> nums = {3, 2, 1, 5, 6, 4};

    int k = 1;
    cout << findKthSmallest(nums, k);
    cout << findKthLargest(nums, k);

    return 0;
}