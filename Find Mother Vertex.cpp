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
void dfs(int start)
{
    stack<int>st;
    st.push(start);
    visited[start]=1;
    while (!st.empty())
    {
        int t=st.top();
        st.pop();
        for(auto a:graph[t])
        {
            if(visited[a]==0)
            {
                visited[a]=1;
                st.push(a);
            }
        }
    }
}
void solve()
{
    int node,edge;
    cin>>node>>edge;
    while(edge--)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
    }
    int mother;
    for(int i=1;i<=node;i++)
    {
        if(visited[i]==0)
        {
            dfs(i);
            mother=i;
        }
    }
    for(int i=1;i<=node;i++)visited[i]=0;
    dfs(mother);
    for(int i=1;i<=node;i++)
    {
        if(visited[i]==0)
        {
            cout<<"No any Mother Vertex"<<endl;
            return;
        }
    }
    cout<<mother<<endl;
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