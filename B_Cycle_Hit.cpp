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
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    map<string,int>mp;
    mp[s1]=1;
    mp[s2]=1;
    mp[s3]=1;
    mp[s4]=1;
    if(mp["H"]==0||mp["2B"]==0||mp["3B"]==0||mp["HR"]==0)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
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