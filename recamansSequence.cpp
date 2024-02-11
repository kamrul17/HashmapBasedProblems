#include <bits/stdc++.h>
using namespace std;
vector<int> recamanSequence(int n)
{
    unordered_set<int> s;
    vector<int> ans(n);
    ans[0] = 0;
    s.insert(0);
    for (int i = 1; i < n; i++)
    {
        int x = ans[i - 1] - i;
        int y = ans[i - 1] + i;
        if (x < 0 || s.find(x) != s.end())
        {
            ans[i] = y;
            s.insert(y);
        }
        else
        {
            ans[i] = x;
            s.insert(x);
        }
    }
    return ans;
}
int main()
{
    int n = 5;
    vector<int> ans = recamanSequence(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}