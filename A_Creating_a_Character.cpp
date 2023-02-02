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
map<int,int>mp;
void bfs(int start)
{
    queue<int>qu;
    qu.push(start);
    visited[start]=1;
    int count=1;
    set<int>st;
    st.insert(start);
    while (!qu.empty())
    {
        int t=qu.front();
        qu.pop();
        for(auto a:graph[t])
        {
            if(visited[a]==0)
            {
                visited[a]=1;
                st.insert(a);
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
    ll a,b,c;
    cin>>a>>b>>c;
    ll tem=0;
    if(b+c>=a)
    {
        tem=(b+c-a)/2;
        tem++;
    }
    cout<<max((ll)0,c-tem+1)<<endl;
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