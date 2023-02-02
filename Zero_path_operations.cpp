#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>graph[200005];
vector<int>visited(200005,0);
vector<int>paren(200005,0);
void dfs()
{
    stack<int>st;
    st.push(1);
    visited[1]=1;
    paren[1]=1;
    map<int,int>mp;
    while (!st.empty())
    {
        int t=st.top();
        set<int,greater<int>>s;
        int p=0;
        for(auto a:graph[t])
        {
            if(visited[a]==0)
            {
                p++;
                s.insert(a);
                visited[a]=1;
                paren[a]=t;
            }
        }
        if(p==0)
        {
            if(mp[t]==0)
            {
                cout<<t<<" "<<paren[t]<<" ";
            }
            else 
            {
                if(paren[t]!=t)cout<<paren[t]<<" ";
            }
              st.pop();
        }
        else 
        {
            for(auto x:s)st.push(x);
            cout<<t<<" ";
            mp[t]=1;
        }
    }
}
void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)graph[i].clear();
    int t=n;
    n--;
    while (n--)
    {
       int u,v;
       cin>>u>>v;
       graph[u].push_back(v);
       graph[v].push_back(u);
    }
    map<int,int>mp;
    for(int i=1;i<=t;i++)
    {
        int value;
        cin>>value;
        mp[i]=value;
    }
    int ans=0;
    for(int i=1;i<=t;i++)
    {
        if(graph[i].size()>1)
        {
            if(mp[i]>0)ans++;
        }
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
    //solve();
    return 0;
}