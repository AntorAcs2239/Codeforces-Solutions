#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>undirected[200005];
void pushUndirectedGraph(int u,int v)
{
    undirected[u].push_back(v);
    undirected[v].push_back(u);
}
int ans[100005];
int visited[100005];
void solve()
{
    ll n;
    cin>>n;
    map<ll,ll>mp;
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
        sum+=x;
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll k,v;
        cin>>k>>v;
        ll t=mp[k];
        if(t>0)
        {
            sum+=t*v-(t*k);
        }
        mp[v]+=t;
        mp[k]=0;
        cout<<sum<<endl;
    }
}
int main()
{
    solve();
}