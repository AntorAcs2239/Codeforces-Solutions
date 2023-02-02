#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
vector<pair<int,int>>unorder[100005];
void push(int u,int v)
{
    unorder[u].push_back(make_pair(v,0));
    unorder[v].push_back(make_pair(u,1));
}

vector<int>ans(100005,INT_MAX);
int visited[100005];
void shortestpath()
{
      priority_queue<pi, vector<pi>, greater<pi> > pq;
      pq.push(make_pair(0,1));
      visited[1]=1;
      while (!pq.empty())
     {
           pair<int,int>p=pq.top();
           int node=p.second;
           int value=p.first;
           pq.pop();
           for(auto a:unorder[node])
           {
                  int t=a.second+value;
                  if(ans[a.first]>t)
                  {
                      ans[a.first]=t;
                      pq.push(make_pair(t,a.first));
                  }
           }
     }
}
void solve()
{
   int node,edge;
   cin>>node>>edge;
   while (edge--)
   {
       int u,v;
       cin>>u>>v;
       push(u,v);
   }
   shortestpath();
   if(ans[node]==INT_MAX)cout<<"-1"<<endl;
   else cout<<ans[node]<<endl;
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