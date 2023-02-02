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
    int n;
    cin>>n;
    ll ar[n+1];
    ll br[n+1];
    ar[0]=0;
    br[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        br[i]=ar[i];
    }
    sort(br+1,br+n+1);
    sort(ar+1,ar+n+1);
    ll ans=0;
    for(int i=2;i<=n;i++)br[i]+=br[i-1];
    for(int i=n;i>=2;i--)
    {
        ll tem=br[i-2];
        ans+=tem-(ar[i]*(i-2));
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