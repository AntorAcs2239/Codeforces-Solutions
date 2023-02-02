#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<ll>vec[200005];
vector<ll>visited(200005,0);
ll ar[200005];
ll bfs(ll start)
{
    ll minn;
    queue<int>q;
    q.push(start);
    visited[start]=1;
    minn=ar[start];
    while (!q.empty())
    {
        ll t=q.front();
        q.pop();
        for(auto a:vec[t])
        {
            if(visited[a]==0)
            {
                visited[a]=1;
                q.push(a);
                minn=min(minn,ar[a]);
            }
        }
    }
    return minn;
}
void push(int u,int v)
{
    vec[u].push_back(v);
    vec[v].push_back(u);
}
void solve()
{
    ll n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>ar[i];
    for(int i=1;i<=q;i++)
    {
        ll u,v;
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
           ll t=bfs(i);
           ans+=t;
        }
    }
    cout<<ans<<endl;
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