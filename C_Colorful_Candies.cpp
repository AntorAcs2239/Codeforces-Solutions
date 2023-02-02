#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
vector<pair<int,int>>unorder[100005];
void push(int u,int v,int wt)
{
    unorder[u].push_back(make_pair(v,wt));
    unorder[v].push_back(make_pair(u,wt));
}
int visited[100005];
vector<int>ans(100005,INT_MAX);
void shortestpath()
{
      queue<int>q;
      q.push(1);
      visited[1]=1;
      ans[1]=0;
      while (!q.empty())
     {
          int t=q.front();
          q.pop();
          for(auto a:unorder[t])
          {
              if(visited[a.first]==0)
              {
                  visited[a.first]=1;
                  ans[a.first]=a.second+ans[t];
                  q.push(a.first);
              }
          }
     }
}
bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll ar[n+1];
    vector<ll>st;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    ll ans=-1;
    unordered_map<ll,ll>mp;
    for(int i=1,j=1;j<=n;)
    {
        if(j<=m)
        {
            if(mp[ar[j]]==0)
            {
                st.push_back(ar[j]);
                mp[ar[j]]++;
            }
            else mp[ar[j]]++;
            j++;
        }
        else 
        {
            ll t=st.size();
            ans=max(t,ans);
            if(st.size()>0)st.erase(st.begin());
            mp[ar[i]]--;
            if(mp[ar[j]]==0)
            {
                st.push_back(ar[j]);
                mp[ar[j]]++;
            }
            else mp[ar[j]]++;
            if(mp[ar[i]]>0)st.push_back(ar[i]);
            i++;
            j++;
        }
    }
    ll t=st.size();
    ans=max(ans,t);
    cout<<ans<<endl;
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