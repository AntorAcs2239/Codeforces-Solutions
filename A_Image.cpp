#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, q;
    cin >> n;
    map<ll, ll> mp;
    map<ll, ll> tem;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (tem[x] == 0)
        {
            mp[x] = y;
            tem[x]=1;
        }
        else
        {
            mp[x] = min(mp[x], y);
        }
    }
    cin >> q;
    vector<ll> vec;
    for (auto x : mp)
    {
            vec.push_back(x.first);
    }
    sort(vec.begin(), vec.end());
    while (q--)
    {
        ll t;
        cin >> t;
        ll p = *lower_bound(vec.begin(), vec.end(), t);
        // cout<<p<<endl;
        if(p>vec.back())
        {
            cout<<mp[vec.back()]<<endl;
        }
        else cout << mp[p] << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}