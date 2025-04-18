#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k)
{

    unordered_map<int, int> freq;

    for (int i = 0; i < nums.size(); i++)
    {

        if (freq.find(nums[i]) == freq.end())
        {
            freq[nums[i]] = 1;
        }
        else
        {
            freq[nums[i]] += 1;
        }
    }

    priority_queue<pair<int, int>> pq;

    for (auto &val : freq)
    {

        pq.push({val.second, val.first});
    }
    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> result = topKFrequent(nums, k);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}