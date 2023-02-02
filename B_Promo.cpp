#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll x, ll y, ll p)
{
    ll res = 1; // Initialize result

    // Update x if it is more than or
    // equal to p
    x = x % p;

    while (y > 0)
    {

        // If y is odd, multiply x
        // with the result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll ar[n+1];
    for(int i=1;i<=n;i++)cin>>ar[i];
    sort(ar+1,ar+n+1);
    reverse(ar+1,ar+n+1);
    ar[0]=0;
    for(int i=2;i<=n;i++)
    {
        ar[i]=ar[i]+ar[i-1];
    }
    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        cout<<ar[x]-ar[x-y]<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
     solve();
    return 0;
}