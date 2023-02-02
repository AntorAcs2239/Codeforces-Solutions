#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 998244353        
#define gcd __gcd
ll power(long long x, unsigned int y, int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
void solve()
{
   ll n;
   cin>>n;
   map<ll,ll>mp;
   for(int i=1;i<=n;i++)
   {
       ll t;
       cin>>t;
       mp[t]++;
   }
   ll tem=power(2,n,mod)-1;
   for(auto a:mp)
   {
       if(a.second>1)
       {
           
       }
   }
   cout<<tem<<endl;
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