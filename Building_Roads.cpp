#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>graph[500005];
vector<int>visited(500005,0);
void bfs(int start)
{
    queue<int>qu;
    qu.push(start);
    visited[start]=1;
    while(!qu.empty())
    {
        int t=qu.front();
        qu.pop();
        for(auto a:graph[t])
        {
            if(visited[a]==0)
            {
                visited[a]=1;
                qu.push(a);
            }
        }
    }
}
void solve()
{
   int n,m;
   cin>>n>>m;
   while(m--)
   {
       int u,v;
       cin>>u>>v;
       graph[u].push_back(v);
       graph[v].push_back(u);
   }
   int ans=0;
   for(int i=1;i<=n;i++)
   {
       if(visited[i]==0)
       {
           bfs(i);
        ans++;
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
    //  while(tc--)
    // {
    //      solve();
    // }
    solve();
    return 0;
}