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
   int n,m;
   cin>>n;
   n--;
   int t=n+1;
   set<int>st;
   while (n--)
   {
       int u,v;
       cin>>u>>v;
       vec[u].push_back(v);
       vec[v].push_back(u);
       st.insert(u);
       st.insert(v);
   }
   int maxx=-1;
   int start;
   for(auto i:st)
   {
       start=i;
       int t1=vec[i].size();
       maxx=max(maxx,t1);
   }
   cout<<maxx<<endl;
   bfs(start,maxx);
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