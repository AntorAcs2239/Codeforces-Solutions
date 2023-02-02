#include<bits/stdc++.h>
using namespace std;
vector<int>undirected[100005];
vector<int>directed[100005];
vector<pair<int,int>>undirectedWt[10005];
vector<pair<int,int>>directedWt[10005];
void pushUndirectedGraph(int u,int v)
{
    undirected[u].push_back(v);
    undirected[v].push_back(u);
}
void pushDirectedGraph(int u,int v)
{
    directed[u].push_back(v);
}
void pushUndirectedWeightedGraph(int u,int v,int wt)
{
   undirectedWt[u].push_back(make_pair(v,wt));
   undirectedWt[v].push_back(make_pair(u,wt));
}
void pushDirectedWeightedGraph(int u,int v,int wt)
{
    directedWt[u].push_back(make_pair(v,wt));
}
int visited[10005];
void dfs(int start)
{
    visited[start]=1;
    stack<int>st;
    st.push(start);
    cout<<start<<" ";
    while (!st.empty())
    {
         int t=st.top();
         st.pop();
         auto a=undirected[t];
         for(auto x:a)
         {
             if(visited[x]==0)
             {
                  visited[x]=1;
                  cout<<x<<" ";
                  st.push(x);
             }
         }
    }
    cout<<endl;
}
void bfs(int start)
{
    visited[start]=1;
    queue<int>st;
    st.push(start);
    cout<<start<<" ";
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
                  cout<<x<<" ";
                  st.push(x);
             }
         }
    }
    cout<<endl;
}
bool CycleDetection(int start,int node)
{
    visited[start]=1;
    queue<int>q;
    q.push(start);
    vector<int>parent(node+1,-1);
    while (!q.empty())
    {
         int t=q.front();
         auto a=undirected[t];
         q.pop();
         for(auto x:a)
         {
            if(visited[x]==0)
            {
                q.push(x);
                visited[x]=1;
                parent[x]=t;
            }
            else if(parent[t]!=x)
            {
               return true;
            }
         }
    }
    return false;
}
bool iscycle(int node)
{
     for(int i=1;i<=node;i++)
    {
        if(visited[i]==0)
        {
            if(CycleDetection(i,node))
            {
                return true;
            }
        }
    }
    return false;
}
int NumberOfConnectedCompunent(int node)
{
    int ans=0;
    for(int i=1;i<=node;i++)
    {
        if(visited[i]==0)
        {
            dfs(i);
            ans++;
        }
    }
    return ans;
}
bool CheckForBipartiteGraphByBFS(int start,int node)
{
    vector<int>color(node+1,0);
    queue<int>q;
    q.push(start);
    color[start]=0;
    while (!q.empty())
    {
        int t=q.front();
        int c=color[t];
        for(auto a:undirected[t])
        {
            if(visited[a]==0)
            {
                color[a]=1-c;
                visited[a]=1;
                q.push(a);
            }
            else if(color[a]==c)return false;
        }
        q.pop();
    }
    return true;
}
bool CheckForBipartiteGraphByDFS(int start,int node)
{
    vector<int>color(node+1,-1);
    stack<int>q;
    q.push(start);
    color[start]=1;
    while (!q.empty())
    {
        int t=q.top();
        int c=color[t];
        for(auto a:undirected[t])
        {
            if(visited[a]==0)
            {
                color[a]=1-c;
                visited[a]=1;
                q.push(a);
            }
            else if(color[a]==c)return false;
        }
        q.pop();
    }
    return true;
}
vector<int>color(100005,-1);
bool CheckForBipartiteGraphByDFSRecursively(int start)
{
    if(color[start]==-1)color[start]=1;
    for(auto a:undirected[start])
    {
        if(color[a]==-1)
        {
            color[a]=1-color[start];
            if(!CheckForBipartiteGraphByDFSRecursively(a))return false;
        }
        else if(color[a]==color[start])return false;
    }
    return true;
}
int main()
{
    int node,edge;
    cin>>node>>edge;
    //for undirected weithted graph
    // while (edge--)
    // {
    //    int u,v,wt;
    //    cin>>u>>v>>wt;
    //    pushUndirectedWeightedGraph(u,v,wt);
    // }
    // for undirected graph
    while (edge--)
    {
       int u,v;
       cin>>u>>v;
       pushUndirectedGraph(u,v);
    }
    bool flag=true;
    for(int i=1;i<=node;i++)
    {
        if(visited[i]==0)
        {
            if(CheckForBipartiteGraphByDFSRecursively(i)==false)
            {
                flag=false;
                break;
            }
        }
    }
    if(flag)cout<<"Biapartite Graph"<<endl;
    else cout<<"Not a Biapartite Graph"<<endl;
    // if(iscycle(node))
    // {
    //     cout<<"Exist a cycle"<<endl;
    // }
    // else cout<<"NO any Cycle"<<endl;
    // for directed graph
    //  while (edge--)
    // {
    //    int u,v;
    //    cin>>u>>v;
    //    pushDirectedGraph(u,v);
    // }
    // for directed weighted graph
    //  while (edge--)
    // {
    //    int u,v,wt;
    //    cin>>u>>v>>wt;
    //    pushDirectedWeightedGraph(u,v,wt);
    // }
    // for(int i=1;i<=node;i++)
    // {
    //    auto x=directedWt[i];
    //    for(auto a:x)
    //    {
    //        cout<<"("<<i<<","<<a.first<<")"<<"->"<<a.second<<endl;
    //    }
    // } 
    return 0;
}