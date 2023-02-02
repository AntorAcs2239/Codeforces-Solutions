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
void bfs(int i)
{
  visit[i]=1;
  queue<int>q;
  q.push(i);
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
      }
    }
  }
}
void solve()
{
  ll n,m;
  cin>>n>>m;
  while(m--)
  {
    int x,y;
    cin>>x>>y;
    vec[x].push_back(y);
    vec[y].push_back(x);
  }
  ll c=0;
  for(int i=1;i<=n;i++)
  {
      if(visit[i]==0)
      {
           c++;
           bfs(i);
      }
  }
  ll ans=pow(2,n-c);
  cout<<ans<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}