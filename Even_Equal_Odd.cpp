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
    ll n,k;
    cin>>n;
    ll ar[2*n];
    ll even=0,odd=0;
    for(int i=0;i<2*n;i++)
    {
        cin>>ar[i];
        if(ar[i]%2==0)even++;
        else odd++;
    }
    if(even<=odd)
    {
        int a=((2*n)/2)-even;
        cout<<a<<endl;
        return;
    }
    vector<ll>vec;
    for(int i=0;i<2*n;i++)
    {
        ll c=0;
        while(ar[i]%2==0)
        {
            c++;
            ar[i]=ar[i]/2;
        }
        if(c>0)vec.push_back(c);
    }
    sort(vec.begin(),vec.end());
    ll need=((2*n)/2)-odd;
    ll ans=0;
    for(int i=0;i<need;i++)ans+=vec[i];
    cout<<ans<<endl;
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