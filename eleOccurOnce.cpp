/*Given an array of integers arr[] of length N, every element appears thrice except for one which occurs once.
Find that element which occurs once.

Example 1:

Input:
N = 4
arr[] = {1, 10, 1, 1}
Output:
10*/
#include <bits/stdc++.h>
using namespace std;
int singleElement(int arr[], int N)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < N; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto i : mpp)
    {
        if (i.second == 1)
        {
            return i.first;
        }
    }
}
int main()
{
    int arr[] = {1, 10, 1, 1};
    int n = sizeof(arr) / sizeof(int);
    int ans = singleElement(arr, n);
    cout << ans;
    return 0;
}