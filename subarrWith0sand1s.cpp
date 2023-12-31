#include <bits/stdc++.h>
using namespace std;
long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
{
    unordered_map<int, int> mpp;
    long long ans = 0;
    long long sum = 0;
    mpp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            sum += 1;
        }
        else
        {
            sum -= 1;
        }
        if (mpp.find(sum) != mpp.end())
        {
            ans += mpp[sum];
            mpp[sum]++;
        }
        else
        {
            mpp[sum] = 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 1, 1, 1, 0};
    int n = sizeof(arr) / sizeof(int);
    int ans = countSubarrWithEqualZeroAndOne(arr, n);
    cout << ans;
    return 0;
}