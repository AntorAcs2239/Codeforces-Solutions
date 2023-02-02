#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
map<ll, ll> mp;
map<ll, ll> tem;
ll binary_searchh(vector<ll>a,ll target)
{
    ll n=a.size();
    if (target < a[0])
            return mp[a[0]];
        if (target > a[n - 1])
            return mp[a[n-1]];
        int start = 0, end = n - 1;
        while (start <=end) {
            int mid = (start + end) / 2;

            if (target == a[mid]) {
                return mp[a[mid]];
            } else if (target < a[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        if ((abs(a[start] - target)) < (abs(target - a[end])))return mp[a[start]];
        else if(abs((a[start] - target) >(target - a[end])))return mp[a[end]];
        else 
        {
           return min(mp[a[start]],mp[a[end]]);
        }
}
void solve()
{
    ll n, q;
    cin >> n;
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
        cout<<binary_searchh(vec,t)<<endl;
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