#include<bits/stdc++.h>
using namespace std;
vector<int>undirected[200005];
void pushUndirectedGraph(int u,int v)
{
    undirected[u].push_back(v);
    undirected[v].push_back(u);
}
int ans[100005];
int visited[100005];
void bfsforatcoder(int start)
{
    visited[start]=1;
    queue<int>st;
    st.push(start);
    ans[start]=start;
    while (!st.empty())
    {
         int t=st.front();
         st.pop();
         for(auto x:undirected[t])
         {
             if(visited[x]==0)
             {
                  visited[x]=1;
                  st.push(x);
                  ans[x]=t;
             }
         }
    }
}
int main()
{
    int node,edge;
    cin>>node>>edge;
    while (edge--)
    {
       int u,v;
       cin>>u>>v;
       pushUndirectedGraph(u,v);
    }
    bfsforatcoder(1);
    cout<<"Yes"<<endl;
    for(int i=2;i<=node;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}