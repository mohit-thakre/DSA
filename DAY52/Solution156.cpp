#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

vector<int> replaceWithRank(vector<int> &arr, int N)
{

    priority_queue<int, vector<int>, greater<int>> pq;
    unordered_map<int, int> ranker;

    for (int i = 0; i < N; i++)
    {
        pq.push(arr[i]);
    }

    int rank = 1;
    while (!pq.empty())
    {
        int top = pq.top();
        pq.pop();
        if (ranker.find(top) == ranker.end())
        {

            ranker[top] = rank++;
        }
    }

    vector<int> res;
    for (int i = 0; i < N; i++)
    {
        res.push_back(ranker[arr[i]]);
    }
    return res;
}

int main()
{

    vector<int> arr = {40, 10, 20, 30, 20};
    int N = arr.size();
    vector<int> result = replaceWithRank(arr, N);

    for (int rank : result)
    {
        cout << rank << " ";
    }
    cout << endl;

    return 0;
}