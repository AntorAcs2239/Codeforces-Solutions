#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll x, ll  y,  ll p)
{
    ll res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = ((res%mod)*(x%mod)) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = ((x%p)*(x%mod))% p;
    }
    return (res%p)-1;
}
void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;
    ll t=0;
    ll tema=a,temb=b;
    ll ans=0;
    ll ans2=0;
    while(a>0&&b>0)
    {
        int x1=a%2;
        int x2=b%2;
        if(x1==0&&x2==0)
        {
            ans+=pow(2,t);
            ans2+=pow(2,t);
        }
        else if(x1!=x2)ans2+=pow(2,t);
        a=a/2;
        b=b/2;
        t++;
    }
    ll m=max(tema,temb);
    if(m==0)
    {
        t=-1;
    }
    else t=log2(m);
    if(n-1>t)
    {
        for(ll i=n-1;i>t;i--)ans+=pow(2,i),ans2+=pow(2,i);
    }
    a=tema,b=temb;
    ll x1=(a^ans)*(b^ans);
    ll x2=(a^ans2)*(b^ans2);
    if(x1>x2)cout<<ans<<endl;
    else cout<<ans2<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
     //solve();
    return 0;
}