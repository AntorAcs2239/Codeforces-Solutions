#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll x, ll y, ll p)
{
    ll res = 1; // Initialize result

    // Update x if it is more than or
    // equal to p
    x = x % mod;

    while (y > 0)
    {

        // If y is odd, multiply x
        // with the result
        if (y & 1)
            res = ((res%mod) * (x%mod)) % mod;

        // y must be even now
        y = y >> 1; // y = y/2
        x = ((x%mod) * (x%mod)) % p;
    }
    return res%mod;
}
ll phi(ll n) {
    ll result = n;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
     
    if (n > 1)
        result -= result / n;
    return result%mod;
}
int test=1;
void solve()
{
    ll n;
    cin >> n;
    string b;
    cin >> b;
    ll remainderB = 0;
    ll MOD = 1000000007;
    for (int i = 0; i < b.length(); i++)
        remainderB = (remainderB * 10 +
                      b[i] - '0') %
                     (MOD - 1);
    ll t= power(n, remainderB, MOD) ;
    t=t%mod;
   cout<<"Case "<< test<<": "<<phi(t)%mod<<endl;
   test++;
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
    // solve();
    return 0;
}