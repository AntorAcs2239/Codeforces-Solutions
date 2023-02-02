#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
void solve()
{
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        mp[i]=x;
    }
    int ans=0;
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        int x=mp[u];
        int y=mp[v];
        ans+=min(x,y);
    }
    cout<<ans<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int tc;
    // cin>>tc;
    //  while(tc--)
    // {
    //      solve();
    //  }
    solve();
    return 0;
}