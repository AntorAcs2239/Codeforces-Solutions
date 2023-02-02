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
   int n,k;
   cin>>n>>k;
   map<int,int>mp;
   for(int i=1;i<=n;i++)
   {
       int x;
       cin>>x;
       mp[x]=i;
   }
   ll ans1=0;
   vector<ll>vec;
   for(int i=n;i>=n-k+1;i--)
   {
       ans1+=i;
       vec.push_back(mp[i]);
   }
      sort(vec.begin(),vec.end());
      vector<ll>tem;
      for(int i=0;i<vec.size()-1;i++)tem.push_back(abs(vec[i]-vec[i+1]));
      ll ans2=1;
      ll t=998244353;
      for(int i=0;i<tem.size();i++)
      {
         ans2=((ans2%t)*(tem[i]%t))%t;
      }
      cout<<ans1<<" "<<ans2<<endl;
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