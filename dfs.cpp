#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
int color[100005];
vector<int>graph[100005];
int parent[100005];
vector<int>visited(200005,0);
vector<int>leaf;
int n,k;
void call(int n)
{
     cout<<n<<endl;
     if(n==0)return;
     else 
     {
         n--;
         call(n);
     }
    cout<<n<<endl;
   
}
void dfs(int node,int par)
{
    int child=0;
    cout<<node<<" ";
    for(auto a:graph[node])
    {
        if(a!=par)
        {
            child++;
            dfs(a,node);
        }
    }
    //if(child==0)cout<<node<<" ";
}
void solve()
{
    cin>>n;
    n--;
    while(n--)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1,-1);
    //call(10);
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