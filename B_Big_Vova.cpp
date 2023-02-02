#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>vec[200005];
vector<int>distanc(200005,INT_MAX);
vector<int>visited(200005,0);
vector<ll>path(200005,0);
ll bfs(int n)
{
    queue<int>q;
    q.push(1);
    visited[1]=1;
    distanc[1]=0;
    path[1]=1;
    while (!q.empty())
    {
        int t=q.front();
        q.pop();
        for(auto a:vec[t])
        {
            if(visited[a]==0)
            {
                visited[a]=1;
                q.push(a);
            }
             if(distanc[a]>distanc[t]+1)
            {
                distanc[a]=distanc[t]+1;
                path[a]=path[t]%mod;
            }
            else if(distanc[a]==distanc[t]+1)
            {
                path[a]=path[a]%mod+path[t]%mod;
            }
        }
    }
    return path[n]%mod;
}
void push(int u,int v)
{
    vec[u].push_back(v);
    vec[v].push_back(u);
}
void solve()
{
    int n;
    cin>>n;
    vector<int>vec;
    map<int,int>mp;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    int t=-1;
    int idx;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>t)
        {
            t=ar[i];
            idx=i;
        }
    }
    mp[idx]=1;
    vec.push_back(t);
    for(int i=0;i<n-1;i++)
    {
        int maxx=-1;
        int id;
        for(int i=0;i<n;i++)
        {
            if(mp[i]==0)
            {
                int x=gcd(t,ar[i]);
                if(x>maxx)
                {
                    maxx=x;
                    id=i;
                }
            }
        }
        t=maxx;
        vec.push_back(ar[id]);
        mp[id]=1;
    }
    for(int i=0;i<n;i++)cout<<vec[i]<<" ";
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