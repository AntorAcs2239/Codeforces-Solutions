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
   ll n;
   cin>>n;
   ll tem=1;
   int t=n/2;
  for(int i=(n/2)+1;i<=n;i++)tem*=i;
  for(int i=2;i<=n/2;i++)
  {
      if(tem%i==0)tem/=i;
  }
  ll ans=tem;
  tem=1;
  for(int i=2;i<=t-1;i++)tem*=i;
  ans=ans*tem*(tem)/2;
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