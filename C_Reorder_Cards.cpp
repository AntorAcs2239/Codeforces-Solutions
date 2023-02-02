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
    int h,w,n;
    cin>>h>>w>>n;
    int ar[n+1];
    int br[n+1];
    int tem[n+1];
    int tem1[n+1];
    int i=1;
    while(n--)
    {
        int u,v;
        cin>>u>>v;
        ar[i]=u;
        tem[i]=u;
        br[i]=v;
        tem1[i]=v;
        i++;
    }
    pair<int,int>final[n+1];
    map<int,int>mp;
    sort(tem+1,tem+n+1);
    sort(tem1+1,tem+n+1);
    for(int i=1;i<=n;i++)
    {
        mp[ar[i]]=i;
    }
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