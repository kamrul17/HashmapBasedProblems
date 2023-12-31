/*You are given an array of integers 'ARR' of length 'N' and an integer Target. Your task is to return all pairs of elements such that they add up to Target.

Note:

We cannot use the element at a given index twice.
Follow Up:

Try to do this problem in O(N) time complexity. */

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> twoSum(vector<int> &arr, int target, int n)
{

    vector<pair<int, int>> ans;
    sort(arr.begin(), arr.end());

    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        if (arr[start] + arr[end] == target)
        {
            ans.push_back({arr[start++], arr[end--]});
        }
        else if (arr[start] + arr[end] < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }

    if (ans.empty())
    {
        ans.push_back({-1, -1});
    }

    return ans;
}

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    int n = arr.size();

    vector<pair<int, int>> result = twoSum(arr, target, n);

    cout << "Pairs that add up to target:" << endl;
    for (const auto &pair : result)
    {
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    }

    return 0;
}
