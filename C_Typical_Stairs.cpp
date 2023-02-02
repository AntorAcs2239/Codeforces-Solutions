#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
ll power(ll x, ll y,ll p)
{
    ll res = 1;     // Initialize result
 
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
    ll n,m;
    cin>>n>>m;
    int ar[m];
    for(int i=0;i<m;i++)cin>>ar[i];
    for(int i=0;i<m-1;i++)
    {
        if(ar[i+1]-ar[i]==1)
        {
            cout<<"0"<<endl;
            return;
        }
    }
    ll ans=power(2,n-3-m,mod);
    cout<<ans<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}