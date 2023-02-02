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
     int n;
     cin>>n;
     string s;
     cin>>s;
     int open=0,close=0;
     int ans=0;
     for(int i=0,j=n-1;i<j;)
     {
        if(s[i]=='(')
        {
            bool flag=true;
            while(s[j]!=')')
            {
                j--;
            }
            if(i<j)ans+=2,j--,i++;
        }
        else i++;
     }
     cout<<n-ans<<endl;
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