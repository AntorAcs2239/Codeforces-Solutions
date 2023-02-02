#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
vector<ll> vec[300005];
vector<ll> visited(300005);
vector<ll> color(300005);
map<ll, ll> mp;
map<ll, ll> s;
map<ll,ll>s2;
void DFS(ll node, ll parent)
{
    s[node] = 1;
    s2[node]=0;
    for (ll child : vec[node])
    {
        if (child == parent)
            continue;
        DFS(child, node);
        // answer[node] = gcd(answer[node], answer[child]);
        s[node] = s[node] + s[child];
        s2[node]=s2[node]+mp[child];
    }
}
void bfs()
{
    queue<ll> q;
    q.push(1);
    visited[1] = 1;
    while (!q.empty())
    {
        ll t = q.front();
        q.pop();
        visited[t] = 1;
        ll m = LLONG_MIN, v=0,p=LLONG_MIN;
        for (auto x : vec[t])
        {
            if (visited[x] == 0)
            {
                ll tem = s[x];
                ll tem2=s2[x];
                if (tem > m)
                {
                    m = s[x];
                    p=s2[x];
                    v = x;
                }
                visited[x] = 1;
            }
        }
        if (vec[v].size()>1)
        {
            q.push(v);
            color[v] = 1;
        }
    }
}
ll ans(ll start)
{
    queue<ll> q;
    visited[start] = 1;
    ll g = mp[start];
    q.push(start);
    //cout<<start<<" ";
    while (!q.empty())
    {
        int t = q.front();
       // cout<<t<<" ";
        q.pop();
        for (auto x : vec[t])
        {
            if (visited[x] == 0&&color[x]==0)
            {
                g = __gcd(mp[x], g);
                visited[x] = 1;
                q.push(x);
            }
        }
    }
    return g;
}
void solve()
{
    ll n;
    cin >> n;
    s.clear();
    s2.clear();
    mp.clear();
    for (ll i = 1; i <= n; i++)
    {
        ll v;
        cin >> v;
        mp[i] = v;
        color[i] = 0;
        visited[i] = 0;
        vec[i].clear();
    }
    for (ll i = 1; i < n; i++)
    {
        ll u, v;
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    DFS(1, -1);
    color[1] = 1;
    bfs();
    for (ll i = 1; i <= n; i++)
    {
        if (color[i] == 1)
        {
            vec[i].clear();
        }
        else visited[i]=0;
    }
    ll t = 0;
    for(ll i=1;i<=n;i++)
    {
        if(color[i]==0&&visited[i]==0)
        {
            t+=ans(i);
        }
    }
    cout<<t<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}
