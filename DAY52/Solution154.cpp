#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> matrix(vector<vector<int>> arr, int k)
{

    vector<int> ans;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            pq.push(arr[i][j]);
        }
    }
    while (!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;
}

int main()
{

    vector<vector<int>> arr = {
        {90, 15, 10},
        {7, 12, 20},
        {5, 8, 25}};
    int k = 3;

    vector<int> result = matrix(arr, k);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}