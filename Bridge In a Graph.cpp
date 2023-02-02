#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>graph[200005];
vector<int>visited(200005);
vector<int>parent(200005,-1);
vector<int>low(200005,-1);
vector<int>tin(200005,-1);
int t=1;
void dfs(int node,int parent)
{
    visited[node]=1;
    low[node]=tin[node]=t++;
    for(auto a:graph[node])
    {
        if(a==parent)continue;
        else if(visited[a]==0)
        {
            dfs(a,node);
            low[node]=min(low[node],low[a]);
            if(low[a]>tin[node])
            {
                cout<<node<<" "<<a<<endl;
            }
        }
        else 
        {
            low[node]=min(low[node],tin[a]);
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
    dfs(1,-1);
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int tc;
    // cin>>tc;
    // while(tc--)
    // {
    //     solve()
    // }
    solve();
    return 0;
}