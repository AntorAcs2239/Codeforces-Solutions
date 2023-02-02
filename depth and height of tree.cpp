#include<bits/stdc++.h>
using namespace std;
vector<int>graph[100005];
int depth[100],height[100];
int nodes[100];
int gcdd[100];
int even[100];
int parent[100];
int subtreesum[100];
void dfs(int v,int p)
{
    nodes[v]=1;
    gcdd[v]=v;
    subtreesum[v]=v;
    if(v%2==0)even[v]=1;
    else even[v]=0;
    parent[v]=p;
    for(auto child:graph[v])
    {
            if(child==p)continue;
            depth[child]=depth[v]+1;
            dfs(child,v);
            height[v]=max(height[v],height[child]+1);
            nodes[v]+=nodes[child];
            gcdd[v]=__gcd(gcdd[v],child);
            even[v]+=even[child];
            subtreesum[v]+=subtreesum[child];
    }
}
void dfsfordiameter(int v,int p)
{
    parent[v]=p;
    for(auto x:graph[v])
    {
        if(x==p)continue;
        depth[x]=depth[v]+1;
        dfsfordiameter(x,v);
        height[v]=max(height[v],height[x]+1);
    }
}
int LCA(int u,int v)
{
    vector<int>pathx,pathy;
    while(u!=-1)
    {
        pathx.push_back(u);
        u=parent[u];
    }
    while(v!=-1)
    {
        pathy.push_back(v);
        v=parent[v];
    }
    reverse(pathx.begin(),pathx.end());
    reverse(pathy.begin(),pathy.end());
    int ans=-1;
    for(int i=0;i<min(pathx.size(),pathy.size());i++)
    {
        if(pathx[i]==pathy[i])
        {
            ans=pathx[i];
        }
        else break;
    }
    return ans;
}
void diameter()
{
    for(int i=1;i<=13;i++)height[i]=0,depth[i]=0,parent[i]=0;
    dfsfordiameter(1,-1);
    int a=height[1];
    for(int i=1;i<=13;i++)height[i]=0,parent[i]=0;
    int v=-1;
    int maxx=INT_MIN;
    for(int i=1;i<=13;i++)
    {
        if(depth[i]>maxx)
        {
            maxx=depth[i];
            v=i;
        }
    }
    cout<<"Vertex: "<<v<<endl;
    dfsfordiameter(v,-1);
    cout<<"Diameter: "<<height[v]<<endl;
     v=-1;
     maxx=INT_MIN;
    for(int i=1;i<=13;i++)
    {
        if(depth[i]>maxx)
        {
            maxx=depth[i];
            v=i;
        }
    }
    cout<<"Path: ";
    while(v!=-1)
    {
        cout<<v<<" ";
        v=parent[v];
    }
    cout<<endl;
     for(int i=1;i<=13;i++)height[i]=0,depth[i]=0;
}
int main()
{
    int edge,vertex;
    cin>>edge;
    for(int i=1;i<=edge;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    diameter();
    dfs(1,-1);
    cout<<endl;
    cout<<"Depth's: ";
    for(int i=1;i<=13;i++)
    {
        cout<<depth[i]<<" ";
    }
    cout<<endl;
    cout<<"Height's: ";
    for(int i=1;i<=13;i++)
    {
        cout<<height[i]<<" ";
    }
    cout<<endl;
    cout<<"Size's: ";
      for(int i=1;i<=13;i++)
    {
        cout<<nodes[i]<<" ";
    }
    cout<<endl;
    cout<<"GCD's: ";
      for(int i=1;i<=13;i++)
    {
        cout<<gcdd[i]<<" ";
    }
      cout<<endl;
      cout<<"EvensCount's: ";
      for(int i=1;i<=13;i++)
    {
        cout<<even[i]<<" ";
    }
     cout<<endl;
      cout<<"Subtreesum's: ";
      for(int i=1;i<=13;i++)
    {
        cout<<subtreesum[i]<<" ";
    }
    cout<<endl;
    int ans=INT_MIN;
    int v;
    for(int i=2;i<=13;i++)
    {
        int sum1=subtreesum[i];
        int sum2=subtreesum[1]-sum1;
        if(sum2*sum1>ans)
        {
            ans=sum2*sum1;
            v=i;
        }
    }
    cout<<ans<<" "<<v<<endl;
}