#include<bits/stdc++.h>
using namespace std;
int graph[1000][1000];
int indegree[1000],outdegree[1000];
int main()
{
    int vertex;
    cout<<"Enter Vertex Number: ";
    cin>>vertex;
    cout<<"Enter Adjacency Matrix"<<endl;
    for(int i=1;i<=vertex;i++)
    {
        for(int j=1;j<=vertex;j++)
        {
            cin>>graph[i][j];
        }
    }
    for(int i=1;i<=vertex;i++)
    {
        for(int j=1;j<=vertex;j++)
        {
            if(graph[i][j]==1)
            {
                indegree[j]++;
                outdegree[i]++;
            }
        }
    }
    cout<<"Vertex Indegree outdegree"<<endl;
    for(int i=1;i<=vertex;i++)
    {
        cout<<i<<" "<<indegree[i]<<" "<<outdegree[i]<<endl;
    }
}