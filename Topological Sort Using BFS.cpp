#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>graph[200005];
vector<int>visited(200005,0);
vector<int>indegree(200005,0);
queue<int>qu;
void BFS_for_Topological_Sort()
{
    while (!qu.empty())
    {
        int t=qu.front();
        cout<<t<<" ";
        qu.pop();
        for(auto a:graph[t])
        {
            indegree[a]--;
            if(indegree[a]==0)qu.push(a);
        }
    }
}
void solve()
{
    int node,edge;
    cin>>node>>edge;
    set<int>s;
    while (edge--)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        s.insert(u);
        s.insert(v);
    }
    for(auto i:s)
    {
        for(auto a:graph[i])
        {
            indegree[a]++;
        }
    }
    for(auto i:s)
    {
        if(indegree[i]==0)qu.push(i);
    }
    BFS_for_Topological_Sort();
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