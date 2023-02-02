#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
ll dp[2];
vector<int>vec[200005];
vector<int>visit(200005);
vector<int>ans; 
void bfs()
{
  visit[1]=1;
  queue<int>q;
  q.push(1);
  ans.push_back(1);
  while(!q.empty())
  {
    int t=q.front();
    q.pop();
    for(auto a:vec[t])
    {
      if(visit[a]==0)
      {
        visit[a]=1;
        q.push(a);
        ans.push_back(a);
      }
    }
  }
}
void solve()
{
  int n;
  cin>>n;
  for(int i=1;i<=n+1;i++)
  {
    vec[i].clear();
    visit[i]=0;
  }
  ans.clear();
  int ar[n+1];
  for(int i=1;i<=n;i++)
  {
    cin>>ar[i];
    if(ar[i]==0)vec[i].push_back(n+1);
    else vec[n+1].push_back(i);
  }
  for(int i=1;i<n;i++)
  {
      vec[i].push_back(i+1);
  }
  bfs();
  bool flag=true;
  for(int i=1;i<=n+1;i++)
  {
    if(visit[i]==0)
    {
      cout<<"-1"<<endl;
      return;
    }
  }
  for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
  cout<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
     while(tc--)
    {
         solve();
     }
    //solve();
    return 0;
}