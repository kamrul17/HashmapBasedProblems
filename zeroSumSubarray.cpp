/*You are given an array arr[] of size n. Find the total count of sub-arrays having their sum equal to 0.


Example 1:

Input:
n = 6
arr[] = {0,0,5,5,0,0}
Output: 6
Explanation: The 6 subarrays are
[0], [0], [0], [0], [0,0], and [0,0].*/
#include <bits/stdc++.h>
using namespace std;
long long int findSubarray(vector<long long int> &arr, int n)
{
    unordered_map<int, int> sumMap;
    long long sum = 0;
    long long count = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum == 0)
            count++;

        if (sumMap.find(sum) != sumMap.end())
            count += sumMap[sum];

        sumMap[sum]++;
    }

    return count;
}
int main()
{
    vector<long long int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    long long n = arr.size();
    long long int ans = findSubarray(arr, n);
    cout << ans;
    return 0;
}