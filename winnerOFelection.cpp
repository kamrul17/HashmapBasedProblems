/*#include <bits/stdc++.h>
using namespace std;
vector<string> winner(string arr[], int n)
{
    map<string, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    int maxCount = 0;
    string winner;
    for (auto &entry : mpp)
    {
        if (entry.second > maxCount || (entry.second == maxCount && entry.first < winner))
        {
            maxCount = entry.second;
            winner = entry.first;
        }
    }
    return {winner, to_string(maxCount)};
}
int main()
{
    string arr[] = {"john", "johnny", "jackie", "johnny", "john",
                    "jackie",
                    "jamie", "jamie", "john", "johnny", "jamie",
                    "johnny", "john"};
    int n = sizeof(arr) / sizeof(string);

    vector<string> ans = winner(arr, n);
    cout << ans[0] << " " << ans[1];

    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(int n, vector<int> &arr, int target)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end())
        {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;
    return 0;
}*/
