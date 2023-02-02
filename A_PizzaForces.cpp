#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>vec[200005];
vector<int>distanc(200005,INT_MAX);
vector<int>visited(200005,0);
vector<ll>path(200005,0);
ll bfs(int n)
{
    queue<int>q;
    q.push(1);
    visited[1]=1;
    distanc[1]=0;
    path[1]=1;
    while (!q.empty())
    {
        int t=q.front();
        q.pop();
        for(auto a:vec[t])
        {
            if(visited[a]==0)
            {
                visited[a]=1;
                q.push(a);
            }
             if(distanc[a]>distanc[t]+1)
            {
                distanc[a]=distanc[t]+1;
                path[a]=path[t]%mod;
            }
            else if(distanc[a]==distanc[t]+1)
            {
                path[a]=path[a]%mod+path[t]%mod;
            }
        }
    }
    return path[n]%mod;
}
void push(int u,int v)
{
    vec[u].push_back(v);
    vec[v].push_back(u);
}
void solve()
{
   ll n;
   cin>>n;
   ll tem1=n;
   ll tem2=n;
   ll ans1=0;

   ll t=n/10;
   ans1+=t*25;
   n=n%10;
   if(n>=9)ans1+=35;
   else if(n!=0)ans1+=15;
    
     ll ans2=0;
     t=tem1/8;
     ans2+=t*20;
     tem1=tem1%8;
     if(tem1!=0)ans2+=15;

     ll ans3=0;
     t=tem2/6;
     ans3+=t*15;
     tem2=tem2%6;
     if(tem2!=0)ans3+=15;
     cout<<min({ans1,ans2,ans3})<<endl;

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