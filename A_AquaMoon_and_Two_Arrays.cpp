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
  int n;
  cin>>n;
  int ar[n];
  int br[n];
  int sum1=0,sum2=0;
  for(int i=0;i<n;i++)
  {
      cin>>ar[i];
      sum1+=ar[i];
  }
  for(int i=0;i<n;i++)
  {
      cin>>br[i];
      sum2+=br[i];
  }
  if(sum1!=sum2)
  {
      cout<<"-1"<<endl;
      return;
  }
  vector<pair<int,int>>vec;
  for(int i=0;i<n;i++)
  {
      if(ar[i]>br[i])
      {
          int t=ar[i]-br[i];
          for(int k=1;k<=t;k++)
          {
              vec.push_back(make_pair(i+1,i+2));
          }
          ar[i]-=t;
          ar[i+1]+=t;
      }
      else if(ar[i]<br[i])
      {
          int t=br[i]-ar[i];
          int p=t;
          for(int k=i+1;k<n;k++)
          {
              if(ar[k]>0)
              {
                  int x=min(t,ar[k]);
                   t-=min(t,ar[k]);
                   
                   for(int j=1;j<=x;j++)
                   {
                       vec.push_back(make_pair(k+1,i+1));
                   }
                   ar[k]-=x;
              }
              if(t==0)
              {
                 
                  ar[i]=ar[i]+p;
                   break;
              }
          }
      }
  }
  
  cout<<vec.size()<<endl;
  for(auto a:vec)
  {
      cout<<a.first<<" "<<a.second<<endl;
  }
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