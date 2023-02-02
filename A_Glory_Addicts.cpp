#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    ll ar[n],br[n];
    vector<ll>z,o;
    vector<ll>to;
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        cin>>br[i];
        to.push_back(br[i]);
        if(ar[i]==0)z.push_back(br[i]);
        else o.push_back(br[i]);
    }
    sort(o.begin(),o.end());
    sort(z.begin(),z.end());
    ll ans=0;
    if(o.size()>z.size())
    {
        for(int i=0;i<o.size()-z.size();i++)ans+=o[i];
        for(int i=o.size()-z.size();i<o.size();i++)ans+=o[i]*2;
        for(int i=0;i<z.size();i++)ans+=z[i]*2;
    }
    else if(z.size()>o.size())
    {
        for(int i=0;i<z.size()-o.size();i++)ans+=z[i];
        for(int i=z.size()-o.size();i<z.size();i++)ans+=z[i]*2;
        for(int i=0;i<o.size();i++)ans+=o[i]*2;
    }
    else 
    {
        sort(to.begin(),to.end());
        ans=to[0];
        for(int i=1;i<to.size();i++)ans+=to[i]*2;
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
    //  solve();
    return 0;
}