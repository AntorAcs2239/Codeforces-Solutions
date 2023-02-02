#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<pair<ll,ll>>vec[200005];
void solve()
{
    ll node,edge,k;
    cin>>node>>edge>>k;
    map<ll,ll>mp;
    for(int i=1;i<=edge;i++)
    {
        ll u,v,l;
        cin>>u>>v>>l;
        vec[u].push_back(make_pair(v,l));
        vec[v].push_back(make_pair(u,l));
    }
    ll ar[k+1];
    for(int i=1;i<=k;i++)
    {
        cin>>ar[i];
        mp[ar[i]]=1;
    }
    ll ans=LLONG_MAX;
    for(int i=1;i<=k;i++)
    {
        for(auto x:vec[ar[i]])
        {
            if(mp[x.first]==0)
            {
                ans=min(ans,x.second);
            }
        }
    }
    if(ans==LLONG_MAX)cout<<"-1"<<endl;
    else cout<<ans<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int tc;
    // cin>>tc;
    // while(tc--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}