#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
string bin(int n,int l)
{
    string tem;
    int k,c;
     for (c = l; c >= 0; c--)
    {
    k = n >> c;

    if (k & 1)
      tem+='1';
    else
      tem+='0';
   }
   return tem;
}
vector<int>vec[200005];
vector<int>visited(200005,0);
map<pair<int,int>,int>mp;
void bfs(int start,int s)
{
    queue<int>q;
    visited[1]=1;
    q.push(1);
    mp[{start,start}]=0;
    while (!q.empty())
    {
       int t=q.front();
       int tem=mp[{t,t}]+1;
       q.pop();
       for(auto a:vec[t])
       {
           if(visited[a]==0)
           {
                if(tem>s)tem=1;
               cout<<tem<<endl;
               mp[{a,a}]=tem;
               tem++;
               visited[a]=1;
               q.push(a);
           }
       }
    }
}
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    set<int>st;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        mp[ar[i]]++;
    }
    ll ans=0;
    for(auto a:mp)
    {
        int t=a.first/2;
        ans+=min(a.second,t);
    }
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