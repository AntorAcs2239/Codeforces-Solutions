#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
vector<pair<int, int>> st;
int mp[200005];
void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i <= 10000; i++)
        mp[i] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[ar[i]] = i + 1;
    }

    int ans = -1;
    for (auto x : st)
    {
        int a = x.first;
        int b = x.second;
        if (mp[a] >= 1 && mp[b] >= 1)
        {
            ans = max(ans, mp[a] + mp[b]);
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            int t = __gcd(i, j);
            if (t == 1)
                st.push_back(make_pair(i, j));
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    //  solve();
    return 0;
}