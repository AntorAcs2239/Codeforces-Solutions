// Single Source Shortest Path Algorithm for Positive Weighted Graph
// Here I Implement Dijkstra's Algorithm for finding shortest path
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<pair<int,int>>graph[200005];
vector<int>visited(200005,0);
vector<int>distan(200005,INT_MAX);
void Run_Dijkstra_Algorithm(int source)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push(make_pair(0,source));
    distan[source]=0;// distan become 0 for source node
    visited[source]=1;// mark sourse node as visited
    while (!pq.empty())
    {
          int t=pq.top().second;// take the distance from pq
          int dis=pq.top().first;// take the node
          pq.pop();// pop the node from pq
          for(auto child:graph[t])
          {
                  visited[child.first]=1;// mark the child node visited
                  int d=child.second;// take distace of child node
                  if((d+dis)<distan[child.first])// check for better distance
                  {
                     distan[child.first]=d+dis;// keep better distance
                     pq.push(make_pair(distan[child.first],child.first));// push distance and node
                  }
          }
    }
}
void solve()
{
    cout<<"Enter No of Vertex and Edge: ";
    int node,edge;
    cin>>node>>edge;// number of node and edge
    cout<<"Enter Node U , V and Weight"<<endl;
    while (edge--)
    {
        int u,v,wt;
        cin>>u>>v>>wt;// take two node and take distace between them
        graph[u].push_back(make_pair(v,wt));// push into graph
        graph[v].push_back(make_pair(u,wt));
    }
    cout<<"Enter Sourse and Destination"<<endl;
    int source, destination;
    cin>>source>>destination;
    Run_Dijkstra_Algorithm(source);
    cout<<distan[destination]<<endl;
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
    solve();// call solve function
    return 0;
}
