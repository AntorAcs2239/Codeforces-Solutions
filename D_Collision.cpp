#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
vector<int>unorder[100005];
void push(int u,int v)
{
    unorder[u].push_back(v);
    unorder[v].push_back(u);
}
int visited[100005];
int ans[100005];
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
               if(visited[a]==0)
               {
                   visited[a]=1;
                   ans[a]=1-ans[t];
                   q.push(a);
               }
           }
     }
}
void solve()
{
   int node,q;
   cin>>node>>q;
   node--;
   while (node--)
   {
       int u,v;
       cin>>u>>v;
       push(u,v);
   }
   shortestpath();
   while (q--)
   {
       int start,end;
       cin>>start>>end;
       if(ans[start]==ans[end])cout<<"Town"<<endl;
       else cout<<"Road"<<endl;
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