#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>vec[200005];
vector<int>visited(200005,0);
vector<int>distan(200005,INT_MAX);
vector<int>path(200005,0);
void bfs(int n)
{
    visited[1]=1;
    distan[1]=0;
    path[1]=1;
    queue<int>q;
    q.push(1);
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
            if(distan[a]>distan[t]+1)
            {
                distan[a]=distan[t]+1;
                path[a]=path[t]%mod;
            }
            else if(distan[a]==distan[t]+1)
            {
                path[a]=(path[a]%mod+path[t]%mod)%mod;
            }
        }
    }
    cout<<path[n]%mod<<endl;
}
void solve()
{
    int node,edge;
    cin>>node>>edge;
    while (edge--)
    {
        int u,v;
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);
        /* code */
    }
    bfs(node);
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