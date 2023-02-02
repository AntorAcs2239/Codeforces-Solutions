#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<pair<int,int>>graph[500005];
vector<int>visited(500005,0);
bool dfs(int start,int end,int color)
{
    stack<int>st;
    st.push(start);
    visited[start]=1;
    while(!st.empty())
    {
        int t=st.top();
        int c=0;
        for(auto a:graph[t])
        {
            int co=a.second;
            if(visited[a.first]==0&&co==color)
            {
                st.push(a.first);
                visited[a.first]=1;
                c++;
            }
        }
        if(end==st.top())
        {
            return true;
        }
        if(c==0)
        {
            st.pop();
        }
    }
    return false;
}
void call(int n)
{
    for(int i=1;i<=n;i++)visited[i]=0;
}
void solve()
{
   int n,m;
   cin>>n>>m;
   while(m--)
   {
       int u,v,c;
       cin>>u>>v>>c;
       graph[u].push_back(make_pair(v,c));
       graph[v].push_back(make_pair(u,c));
   }
   int q;
   cin>>q;
   while(q--)
   {
       int u,v;
       cin>>u>>v;
       int ans=0;
       for(int i=1;i<=100;i++)
       {
           if(dfs(u,v,i))ans++;
           call(n);
       }
       cout<<ans<<endl;
   }
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int tc;
    // cin>>tc;
    //  while(tc--)
    // {
    //      solve();
    // }
    solve();
    return 0;
}