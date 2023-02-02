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
    int n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    string tem,tem2;
    for(int i=0;i<(n-m+1);i++)tem+=s1[i];
    for(int i=n-m+1;i<n;i++)tem2+=s1[i];
    string x;
    for(int i=1;i<m;i++)x+=s2[i];
    if(tem2!=x)
    {
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<(n-m+1);i++)
    {
        if(s1[i]==s2[0])
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

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