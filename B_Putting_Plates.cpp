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
  int w,h;
  cin>>w>>h;
  int ar[w+1][h+1];
  for(int i=0;i<w;i++)
  {
      for(int j=0;j<h;j++)
      {
          ar[i][j]=0;
      }
  }
  for(int i=0;i<w;i++)
  {
      for(int j=0;j<h;j++)
      {
          if(i==0||i==w-1||j==0||j==h-1)
          {
              bool flag=false;
              if((i-1)>=0)
              {
                  if(ar[i-1][j]==1)flag=true;
              }
              if((i+1)<=w-1)
              {
 if(ar[i+1][j]==1)flag=true;
              }
              if((j-1)>=0)
              {
 if(ar[i][j-1]==1)flag=true;
              }
              if((j+1)<=h-1)
              {
 if(ar[i][j+1]==1)flag=true;
              }
              if((i-1)>=0&&(j-1)>=0)
              {
 if(ar[i-1][j-1]==1)flag=true;
              }
              if((i+1)<=w-1&&(j+1)<=h-1)
              {
 if(ar[i+1][j+1]==1)flag=true;
              }
               if((i-1)>=0&&(j+1)<=h-1)
              {
 if(ar[i-1][j+1]==1)flag=true;
              }
               if((i+1)<=w-1&&(j-1)>=0)
              {
 if(ar[i+1][j-1]==1)flag=true;
              }
              if(!flag)ar[i][j]=1;
          }
      }
  }
  for(int i=0;i<w;i++)
  {
      for(int j=0;j<h;j++)
      {
          cout<<ar[i][j];
      }
      cout<<endl;
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