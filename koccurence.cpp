#include <bits/stdc++.h>
using namespace std;
int firstElementKTime(int a[], int n, int k)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[a[i]]++;
        if (mpp[a[i]] >= k)
        {
            return a[i];
            break;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 7, 4, 3, 4, 8, 7};
    int n = sizeof(arr) / sizeof(int);
    int k = 2;
    int ans = firstElementKTime(arr, n, k);
    cout << ans;
    return 0;
}