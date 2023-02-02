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
   int ar[3][3];
   cin>>ar[0][0]>>ar[0][1]>>ar[0][2];
   cin>>ar[1][0]>>ar[1][2];
   cin>>ar[2][0]>>ar[2][1]>>ar[2][2];
   int a=abs(ar[0][0]-(-1*ar[2][2]));
   a=a/2;
   a=ar[0][0]>=ar[2][2]?a=a+ar[2][2]:a+=ar[0][0];
   int b=abs(ar[0][2]-(-1*ar[2][0]));
   b=b/2;
   b=ar[0][2]>=ar[2][0]?b+=ar[2][0]:b+=ar[0][2];
   int c=abs(ar[0][1]-(-1*ar[2][1]));
   c=c/2;
   c=ar[0][1]<=ar[2][1]?c+=ar[0][1]:c+=ar[2][1];
   int d=abs(ar[1][0]-(-1*ar[1][2]));
   d=d/2;
   d=ar[1][0]>=ar[1][2]?d+=ar[1][2]:d+=ar[1][0];
   int m=max({a,b,c,d});
   ar[1][1]=m;
   int ans=0;
   if(ar[0][1]-ar[0][0]==ar[0][2]-ar[0][1])ans++;
   if(ar[1][1]-ar[1][0]==ar[1][2]-ar[1][1])ans++;
   if(ar[2][1]-ar[2][0]==ar[2][2]-ar[2][1])ans++;

   if(ar[1][0]-ar[0][0]==ar[2][0]-ar[1][0])ans++;
   if(ar[1][1]-ar[0][1]==ar[2][1]-ar[1][1])ans++;
   if(ar[1][2]-ar[0][2]==ar[2][2]-ar[1][2])ans++;

   if(ar[1][1]-ar[0][0]==ar[2][2]-ar[1][1])ans++;
   if(ar[1][1]-ar[0][2]==ar[2][0]-ar[1][1])ans++;
   cout<<ans<<endl;

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
   // solve();
    return 0;
}