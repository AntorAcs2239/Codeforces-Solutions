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
    string s;
    int n;
    cin>>n;
    cin>>s;
    int count=1;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=s[i-1])count++;
    }
    if(count==2)cout<<"RAMADHIR"<<endl;
    else cout<<"SAHID"<<endl;
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