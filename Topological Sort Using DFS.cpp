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
stack<int>ans;
void DFS_for_Topological_Sort(int start)
{
    visited[start]=1;
    stack<int>st;
    st.push(start);
    while (!st.empty())
    {
       int t=st.top();
       int child_count=0;
       for(auto a:graph[t])
       {
           if(visited[a]==0)
           {
               child_count++;
               st.push(a);
               visited[a]=1;
           }
       } 
       if(child_count==0)
       {
           ans.push(st.top());
           st.pop();
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
        if(visited[i]==0)
        {
            DFS_for_Topological_Sort(i);
        }
    }
    while (!ans.empty())
    {
       cout<<ans.top()<<" ";
       ans.pop();
    }
    
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