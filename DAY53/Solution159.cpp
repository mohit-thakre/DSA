#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

vector<vector<string>> groupAnagram(vector<string> &str)
{

    unordered_map<string, vector<string>> map;

    for (int i = 0; i < str.size(); i++)
    {
        string original = str[i];
        string copy = str[i];
        sort(copy.begin(), copy.end());

        map[copy].push_back(original);
    }

    vector<vector<string>> ans;
    for (auto it : map)
    {
        ans.push_back(it.second);
    }
    return ans;
}
int main()
{

    vector<string> words = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagram(words);

    for (const auto &group : result)
    {
        for (const auto &word : group)
        {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}