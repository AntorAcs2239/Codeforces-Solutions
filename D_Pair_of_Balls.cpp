#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
void solve()
{
     ll n,m;
     cin>>n>>m;
     vector<pair<ll,ll>>vec[2*n+1];
     ll c=1;
     vector<ll>tem;
     map<ll,ll>mp;
     map<ll,ll>s;
     while(m--)
     {
         ll k;
         cin>>k;
         s[c]=k;
         for(int i=1;i<=k;i++)
         {
             ll x;
             cin>>x;
             vec[x].push_back(make_pair(c,i));
             if(mp[x]==0)
             {
                 tem.push_back(x);
                 mp[x]++;
             }
         }
         c++;
     }
     bool flag=true;
     for(int i=1;i<=n;i++)
     {
         pair<ll,ll>pr[2];
         ll k=0;
         for(auto a:vec[i])
         {
             pr[k].first=a.first;
             pr[k].second=a.second;
             k++;
         }
         ll a=pr[0].first;
         ll b=pr[0].second;
         ll c=pr[1].first;
         ll d=pr[1].second;
         if(a==c)
         {
             cout<<"No"<<endl;
             return;
         }
     }
     map<ll,ll>st;
     for(int i=0;i<tem.size();i++)
     {
         pair<ll,ll>pr[2];
         ll k=0;
         for(auto a:vec[tem[i]])
         {
             pr[k].first=a.first;
             pr[k].second=a.second;
             k++;
         }
         ll a=pr[0].first;
         ll b=pr[0].second-st[a];
         ll c=pr[1].first;
         ll d=pr[1].second-st[c];
         if(b!=d)
         {
             cout<<"No"<<endl;
             return;
         }
         st[a]++;
         st[c]++;
     }
     cout<<"Yes"<<endl;
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
}