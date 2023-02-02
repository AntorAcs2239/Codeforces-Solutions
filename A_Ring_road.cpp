#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
int inde[200005];
int out[200005];
int n;
vector<pair<int,int>>graph[200005];
vector<pair<int,int>>t[200005];
vector<int>visited(200005,0);
map<pair<int,int>,int>mp;
int anstem=0;
void indedoutdeg()
{
    for(int i=1;i<=n;i++)
    {
        auto a=t[i];
        for(int j=0;j<a.size();j++)
        {
            inde[a[j].first]++;
        }
        out[i]=a.size();
    }
}
void bfs(int start)
{
    queue<int>qu;
    qu.push(start);
    visited[start]=1;
    int minn=INT_MAX;
    set<int>st;
    st.insert(start);
    while (!qu.empty())
    {
        int t=qu.front();
        qu.pop();
        for(auto a:graph[t])
        {
            if(visited[a.first]==0)
            {
                minn=min(minn,a.second);
                visited[a.first]=1;
                qu.push(a.first);
                st.insert(a.first);
            }
        }
    }
    if(st.size()==1)return;
    int in=-1,o=-1;
    for(auto a:st)
    {
        if(inde[a]==0)
        {
            in=a;
            break;
        }
    }
    for(auto a:st)
    {
        if(out[a]==0)
        {
            o=a;
            break;
        }
    }
    if(in!=-1&&o!=-1)
    {
        mp[make_pair(in,o)]=minn;
        anstem++;
    }
}
ll dfs(int start)
{
    stack<int>st;
    st.push(start);
    visited[start]=1;
    ll tem=0;
    while(!st.empty())
    {
        int t=st.top();
        int c=0;
        for(auto a:graph[t])
        {
            if(visited[a.first]==0)
            {
                visited[a.first]=1;
                if(mp[make_pair(t,a.first)]==0)tem+=a.second;
                st.push(a.first);
                c++;
            }
        }
        if(c==0)st.pop();
    }
    return tem;
}
void solve()
{
    cin>>n;
    int tem=n;
    while(tem--)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        t[u].push_back(make_pair(v,wt));
        graph[u].push_back(make_pair(v,wt));
        graph[v].push_back(make_pair(u,wt));
        mp[make_pair(u,v)]=1;
    }
    ll ans=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        auto x=graph[i];
        ll t=0;
        if(mp[make_pair(i,x[0].first)]==0){t+=x[0].second;}
        if(mp[make_pair(x[1].first,i)]==0)t+=x[1].second;
        visited[i]=1;
         t+=dfs(x[0].first);
       ans=min(ans,t);
         t=0;
        if(mp[make_pair(i,x[1].first)]==0)t+=x[1].second;
        if(mp[make_pair(x[0].first,i)]==0)t+=x[0].second;
        for(int i=1;i<=n;i++)
        {
            visited[i]=0;
        }
        visited[i]=1;
        t+=dfs(x[1].first);
        ans=min(ans,t);
         for(int i=1;i<=n;i++)
        {
            visited[i]=0;
        }
    }
   cout<<ans<<endl;
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