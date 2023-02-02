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
map<int,int>mp;
void bfs()
{
    queue<int>q;
    visited[1]=1;
    q.push(1);
    while (!q.empty())
    {
       int t=q.front();
       q.pop();
       for(auto a:vec[t])
       {
           if(visited[a]==0)
           {
               visited[a]=1;
               mp[a]+=mp[t];
               q.push(a);
           }
       }
    }
}
void solve()
{
   int n,m;
   cin>>n>>m;
   n--;
   set<int>st;
   while (n--)
   {
       int u,v;
       cin>>u>>v;
       st.insert(u);
       st.insert(v);
       vec[u].push_back(v);
       vec[v].push_back(u);
   }
   while (m--)
   {
       int v,s;
       cin>>v>>s;
       mp[v]+=s;
   }
   bfs();
   for(auto a:st)cout<<mp[a]<<" ";
   cout<<endl;
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