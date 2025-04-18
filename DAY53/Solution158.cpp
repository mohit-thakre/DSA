#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(int arr[], int s, int t)
{

    unordered_map<int, int> map;
    vector<int> ans;

    for (int i = 0; i < s; i++)
    {

        int valueTofind = t - arr[i];

        if (map.find(valueTofind) != map.end())
        {

            ans.push_back(map[valueTofind]);
            ans.push_back(i);
        }
        else
        {

            map[arr[i]] = i;
        }
    }

    return ans;
}

int main()
{

    int arr[] = {3, 3};
    int target = 6;
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> result = twoSum(arr, size, target);

    for (int index : result)
    {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}