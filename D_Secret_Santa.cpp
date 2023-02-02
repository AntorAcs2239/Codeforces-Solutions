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
bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
void solve()
{
  int n;
  cin>>n;
  int ar[n];
  set<int>st;
  for(int i=0;i<n;i++)
  {
      cin>>ar[i];
      st.insert(ar[i]);
  }
  cout<<st.size()<<endl;
  map<int,int>mp;
  int br[n];
  for(int i=0;i<n;i++)
  {
      if(mp[ar[i]]==0)
      {
          br[i]=ar[i];
          mp[ar[i]]=1;
      }
      else br[i]=0;
  }
  for(int i=0;i<n;i++)
  {
     cout<<br[i]<<" ";
  }
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