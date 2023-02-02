#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,x;
    cin>>n>>x;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    vector<pair<ll,ll>>vec;
    for(int i=0;i<n;i++)
    {
        ll t=abs(ar[i]-x);
        vec.push_back({t,ar[i]+x});
    }
    ll ans=0,maxx=vec[0].second,minn=vec[0].first;
    for(int i=1;i<vec.size();i++)
    {
        int t=vec[i].first;
        int t2=vec[i].second;
        if(t>maxx||t2<minn)
        {
            ans++;
            maxx=t2;
            minn=t;
        }
        else 
        {
            maxx=min(maxx,vec[i].second);
            minn=max(minn,vec[i].first);
        }
    }
    cout<<ans<<endl;
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
     //solve();
    return 0;
}