#include<bits/stdc++.h>
using namespace std;
int visited[1000];
void dfs(int vertex,int matrix[][5],int start)
{
    cout<<start<<endl;
    visited[start]=1;
    for(int i=1;i<=vertex;i++)
    {
        if(matrix[start][i]==1&&visited[i]==0)
        {
            dfs(vertex,matrix,i);
        }
    }
}
int main()
{
    int vertex,edge;
    cin>>vertex>>edge;
    int matrix[vertex+1][vertex+1];
    int indegree[vertex],outdegree[vertex];
    for(int i=1;i<=vertex;i++)
    {
        indegree[i]=0,outdegree[i]=0;
        for(int j=1;j<=vertex;j++)matrix[i][j]=0;
    }
    for(int i=1;i<=edge;i++)
    {
        int u,v;
        cin>>u>>v;
        matrix[u][v]=1;
        indegree[v]++;
        outdegree[u]++;
    }
    cout<<"Adjacency Matrix"<<endl;
     for(int i=1;i<=vertex;i++)
    {
        for(int j=1;j<=vertex;j++)cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    cout<<"Vertex "<<"Indegree "<<"Outdegree"<<endl;
    for(int i=1;i<=vertex;i++)
    {
        cout<<i<<" "<<indegree[i]<<" "<<outdegree[i]<<endl;
    }
    dfs(vertex,matrix,1);
}