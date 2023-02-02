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
    int n,a,b;
    cin>>n>>a>>b;
    string str;
    cin>>str;
    vector<int>even;
    vector<int>odd;
    int z=0,o=0;
    for(int i=0;i<str.size();i++)
    {
       if(str[i]=='0')
       {
           if(o>0)even.push_back(o);
           o=0;
           z++;
       }
       else 
       {
           if(z>0)odd.push_back(z);
           z=0;
           o++;
       }
    }
    if(o>0)even.push_back(o);
    if(z>0)odd.push_back(z);
    if(a<0)
    {
        int t=b-a;
        cout<<n*t<<endl;
    }
    else
    {
        int e=even.size();
        int o=odd.size();
        int t=min(e,o);
        
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