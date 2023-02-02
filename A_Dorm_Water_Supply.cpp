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
vector<int>visited(200005,0);
map<pair<int,int>,int>mp;
int anstem=0;
void indedoutdeg()
{
    for(int i=1;i<=n;i++)
    {
        auto a=graph[i];
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
void solve()
{
    int k;
    cin>>n>>k;
    while(k--)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        graph[u].push_back(make_pair(v,wt));
    }
    indedoutdeg();
    for(int i=1;i<=n;i++)
    {
         bfs(i);
         for(int i=1;i<=n;i++)visited[i]=0;
    }
    cout<<anstem<<endl;
    for(auto a:mp)
    {
        cout<<a.first.first<<" "<<a.first.second<<" "<<mp[make_pair(a.first.first,a.first.second)]<<endl;
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