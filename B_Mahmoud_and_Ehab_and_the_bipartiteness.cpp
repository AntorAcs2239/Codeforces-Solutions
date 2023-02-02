#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>graph[200005];
vector<int>color(200005,0);
vector<int>visited(200005,0);
void dfs()
{
    queue<int>qu;
    qu.push(1);
    color[1]=0;
    visited[1]=1;
    while(!qu.empty())
    {
        int t=qu.front();
        qu.pop();
        for(auto a:graph[t])
        {
            if(visited[a]==0)
            {
                visited[a]=1;
                color[a]=1-color[t];
                qu.push(a);
            }
        }
    }
}
void solve()
{
   int node;
   cin>>node;
   int tem=node;
   tem--;
   while (tem--)
   {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
   }
   dfs();
   ll zero=0,one=0;
   for(int i=1;i<=node;i++)
   {
       if(color[i]==0)zero++;
       else one++;
   }
   cout<<(zero*one)-(node-1)<<endl;
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