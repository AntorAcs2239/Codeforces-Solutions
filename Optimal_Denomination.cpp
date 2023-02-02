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
ll power(ll x, ll y, ll p)
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
ll dp[100005];
ll pre[100005];
ll idx;
int MaxGCD(ll a[], ll n)
{
   ll Prefix[n + 2];
   ll Suffix[n + 2];
    Prefix[1] = a[0];
    for (int i = 2; i <= n; i += 1) {
        Prefix[i] = __gcd(Prefix[i - 1], a[i - 1]);
    }
    Suffix[n] = a[n - 1];
    for (int i = n - 1; i >= 1; i -= 1) {
        Suffix[i] = __gcd(Suffix[i + 1], a[i - 1]);
    }
    if(Suffix[2]>Prefix[n-1])
    {
        idx=0;
    }
    else if(Prefix[n-1]>Suffix[2])
    {
        idx=n-1;
    }
    else idx=n-1;
    ll ans = max(Suffix[2], Prefix[n - 1]);
    for (int i = 2; i < n; i += 1) {
        ll t=max(ans, __gcd(Prefix[i - 1], Suffix[i + 1]));
        if(t>ans)
        {
            ans=t;
            idx=i-1;
        }
    }
    return ans;
}
void solve()
{
   ll n;
   cin>>n;
   ll ar[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   sort(ar,ar+n);
   ll t=MaxGCD(ar,n);
   ll ans=0;
   ar[idx]=t;
   for(int i=0;i<n;i++)ans+=ar[i]/t;
   cout<<ans<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while (tc--)
    {
       solve();
    }
    //solve();
    return 0;
}