#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>vec[200005];
vector<int>distanc(200005,INT_MAX);
vector<int>visited(200005,0);
vector<ll>path(200005,0);
ll bfs(int n)
{
    queue<int>q;
    q.push(1);
    visited[1]=1;
    distanc[1]=0;
    path[1]=1;
    while (!q.empty())
    {
        int t=q.front();
        q.pop();
        for(auto a:vec[t])
        {
            if(visited[a]==0)
            {
                visited[a]=1;
                q.push(a);
            }
             if(distanc[a]>distanc[t]+1)
            {
                distanc[a]=distanc[t]+1;
                path[a]=path[t]%mod;
            }
            else if(distanc[a]==distanc[t]+1)
            {
                path[a]=path[a]%mod+path[t]%mod;
            }
        }
    }
    return path[n]%mod;
}
void push(int u,int v)
{
    vec[u].push_back(v);
    vec[v].push_back(u);
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll fri[n+1];
    ll val[m+1];
    for(int i=1;i<=n;i++)cin>>fri[i];
    for(int i=1;i<=m;i++)cin>>val[i];
    sort(fri+1,fri+n+1);
    ll ans=0;
    ll k=1;
    for(int i=n;i>=1;i--)
    {
        ll t=val[fri[i]];
        ll t2=val[k];
        if(t2<t)
        {
            ans+=t2;
            k++;
        }
        else 
        {
            ans+=t;
        }
    }
    cout<<ans<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    //solve();
    return 0;
}