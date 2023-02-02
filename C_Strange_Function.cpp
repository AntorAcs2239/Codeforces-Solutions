#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
bool fun1(ll n,ll b)
{
    for(int  i=1;;i++)
    {
        if(b*i==n)return true;
        if(b*i>n)break;
    }
    return false;
}
bool fun2(ll n,ll a)
{
    if(n%a==0)return true;
    else return false;
}
void solve()
{
   ll n,a,b;
   cin>>n;
   ll ans=0;
   ll lcm=1;
   ll tem=n;
   for(ll i=1;;i++)
   {
      lcm=(lcm*i)/gcd(lcm,i);
      ans=ans%mod+(((tem-n/lcm)%mod)*(i%mod))%mod;
      ans=ans%mod;
      tem=n/lcm;
      if(tem==0)break;
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
   // solve();
    return 0;
}