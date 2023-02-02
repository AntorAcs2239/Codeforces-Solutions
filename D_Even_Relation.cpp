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
void push(int u,int v,int wt)
{
    unorder[u].push_back(make_pair(v,wt));
    unorder[v].push_back(make_pair(u,wt));
}
int visited[100005];
vector<int>ans(100005,INT_MAX);
void shortestpath()
{
      queue<int>q;
      q.push(1);
      visited[1]=1;
      ans[1]=0;
      while (!q.empty())
     {
          int t=q.front();
          q.pop();
          for(auto a:unorder[t])
          {
              if(visited[a.first]==0)
              {
                  visited[a.first]=1;
                  ans[a.first]=a.second+ans[t];
                  q.push(a.first);
              }
          }
     }
}
void solve()
{
   int node,q;
   int n;
   cin>>n;
   for(int i=1;i<n;i++)
   {
       int u,v,wt;
       cin>>u>>v>>wt;
       push(u,v,wt);
   }
   shortestpath();
   for(int i=1;i<=n;i++)
   {
    //    if((ans[1]+ans[i])%2==1)cout<<"1"<<endl;
    //    else cout<<"0"<<endl;
      cout<<ans[i]<<endl;
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