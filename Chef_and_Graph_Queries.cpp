#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>graph[500005];
vector<int>visited(500005,0);
void bfs(int start)
{
    queue<int>qu;
    qu.push(start);
    visited[start]=1;
    while(!qu.empty())
    {
        int t=qu.front();
        qu.pop();
        for(auto a:graph[t])
        {
            if(visited[a]==0)
            {
                visited[a]=1;
                qu.push(a);
            }
        }
    }
}
void solve()
{
   int n,m,q;
   cin>>n>>m>>q;
   int pre[m+1];
   int i=1;
   pre[0]=0;
   int t=m;
   int count=0;
   map<pair<int,int>,int>mp;
   while(m--)
   {
       int u,v;
       cin>>u>>v;
       if(mp[make_pair(u,v)]==0&&mp[make_pair(v,u)]==0&&u!=v)count++;
       mp[make_pair(u,v)]=1;
       mp[make_pair(v,u)]=1;
       pre[i]=count;
       i++;
   }
   for(int i=1;i<=t;i++)
   {
       cout<<pre[i]<<" ";
   }
   cout<<endl;
//    for(int i=2;i<=t;i++)
//    {
//        pre[i]+=pre[i-1];
//    }
   while(q--)
   {
       int l,r;
       cin>>l>>r;
       int ans=pre[r]-pre[l-1];
       ans+=1;
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