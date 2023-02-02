#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll x, ll y, ll p)
{
    ll res = 1; // Initialize result

    // Update x if it is more than or
    // equal to p
    x = x % p;

    while (y > 0)
    {

        // If y is odd, multiply x
        // with the result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
void solve()
{
    int n;
    cin>>n;
    map<int,vector<int>>mp;
    map<int,int>tem;
    map<int,int>pr;
    pr[1]=-1;
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        mp[u].push_back(v);
        pr[u]=v;
    }
    for(int i=2;i<=n;i++)
    {
        if(mp[i].size()==0)
        {
            tem[i]=0;
        }
    }
    for(int i=n;i>=2;i--)
    {
        vector<int>t=mp[i];
        tem[i]=mp[i].size()+tem[t.begin()]+tem[t.back()];
    }
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" "<<tem[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}