#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
vector<int>vec[200005];
vector<int>visited(200005,0);
int bfs(int start)
{
    queue<int>q;
    q.push(start);
    visited[start]=1;
    int tem=1;
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
               tem++;
           }
       }
    }
    return tem;
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
    }
    ll ans=-1;
    for(int i=1;i<=node;i++)
    {
        if(visited[i]==0)
        {
            ll p=bfs(i);
            ans=max(ans,p);
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