#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll x, ll y)
{
    ll res = 1; // Initialize result
 
    // Update x if it is more than or
    // equal to p
    x = x;
 
    while (y > 0) {
       
        // If y is odd, multiply x
        // with the result
        if (y & 1)
            res = (res * x) ;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) ;
    }
    return res;
}
void sol()
{
    ll n;
    cin>>n;
    ll ar[n+1];
    for(int i=1;i<=n;i++)cin>>ar[i];
    ll ans=ar[1]-1;
    ll cur=ans+1;
    for(ll i=2;i<=n;i++)
    {
        if(ar[i]<=i)
        {
            cur++;
        }
        else 
        {
            ans+=ar[i]-(cur+1);
            cur=ar[i];
        }
    }
    cout<<ans<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    //sol();
    return 0;
}