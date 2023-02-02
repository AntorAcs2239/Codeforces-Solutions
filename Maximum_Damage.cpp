#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>graph[200005];
vector<int>color(200005,0);
vector<int>visited(200005,0);
void dfs()
{
    queue<int>qu;
    qu.push(1);
    color[1]=0;
    visited[1]=1;
    while(!qu.empty())
    {
        int t=qu.front();
        qu.pop();
        for(auto a:graph[t])
        {
            if(visited[a]==0)
            {
                visited[a]=1;
                color[a]=1-color[t];
                qu.push(a);
            }
        }
    }
}
void solve()

{
    ll n;
    cin>>n;
    ll ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<(ar[0]&ar[1])<<" ";
    for(int i=1;i<n-1;i++)
    {
        ll t=ar[i]&ar[i-1];
        ll t2=ar[i]&ar[i+1];
        cout<<max(t,t2)<<" ";
    }
    cout<<(ar[n-1]&ar[n-2])<<" ";
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