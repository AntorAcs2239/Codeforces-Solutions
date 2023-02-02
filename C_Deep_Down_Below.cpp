#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
void solve()
{
   ll n;
   cin>>n;
   ll t=n;
   vector<pair<ll,pair<ll,ll>>>vec;
  for(int i=1;i<=n;i++)
   {
       ll k;
       cin>>k;
       ll maxx=-1,maxxidx;
       for(int j=1;j<=k;j++)
       {
           ll u;
           cin>>u;
           if(u>maxx)
           {
               maxx=u;
               maxxidx=j-1;
           }
       }
       vec.push_back(make_pair(maxx,make_pair(maxxidx,k)));
   }
   sort(vec.begin(),vec.end());
   ll tem=vec[0].first-vec[0].second.first+1;
   ll runn=tem;
   for(int i=1;i<t;i++)
   {
       ll y=vec[i].first-vec[i].second.first+1;
       ll x=runn+vec[i-1].second.second+vec[i].second.first;
       if(x<y)
       {
           tem=y;
           runn=y;
       }
       else 
       {
           runn+=vec[i].second.second+vec[i-1].second.second;
       }
   }
   cout<<tem<<endl;
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