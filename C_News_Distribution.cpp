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
map<int,int>mp;
void bfs(int start)
{
    queue<int>qu;
    qu.push(start);
    visited[start]=1;
    int count=1;
    set<int>st;
    st.insert(start);
    while(!qu.empty())
    {
        int t=qu.front();
        qu.pop();
        for(auto a:graph[t])
        {
            if(visited[a]==0)
            {
                st.insert(a);
                visited[a]=1;
                qu.push(a);
                count++;
            }
        }
    }
    for(auto a:st)
    {
        mp[a]=count;
    }
}
void solve()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int g;
        cin>>g;
        int ar[g+1];
        for(int i=1;i<=g;i++)
        {
            cin>>ar[i];
        }
        for(int i=2;i<=g;i++)
        {
            graph[ar[i]].push_back(ar[i-1]);
            graph[ar[i-1]].push_back(ar[i]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            bfs(i);
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<mp[i]<<" ";
    }
    cout<<endl;
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
    //  }
    solve();
    return 0;
}