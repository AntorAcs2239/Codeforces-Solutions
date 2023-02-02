#include<bits/stdc++.h>
using namespace std;
vector<int>undirected[100005];
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
         auto a=undirected[t];
         for(auto x:a)
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
    cin>>node;
    node--;
    while (node--)
    {
       int u,v;
       cin>>u>>v;
       pushUndirectedGraph(u,v);
    }
    bfsforatcoder(1);
   int q;
   cin>>q;
   while (q--)
   {
      int n;
      cin>>n;
      map<int,int>mp;
      for(int i=1;i<=n;i++)
      {
          int x;
          cin>>x;
          int t=mp[x];
          mp[t]++;
      }
      bool flag=false;
      bool flag3=false;
      int tem=0;
      for(auto a:mp)
      {
          if(a.second>=2)
          {
              tem++;
          }
          if(a.second>2)flag3=true;
      }
      if(flag3)cout<<"NO"<<endl;
      else if(tem>1)cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
   }
}