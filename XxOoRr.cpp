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
void solve()
{
   ll n,k;
   cin>>n>>k;
   ll ar[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   sort(ar,ar+n);
   ll ans=0;
   for(int i=0;i<=33;i++)
   {
       int p=0;
       for(int j=0;j<n;j++)
       {
           ll x=ar[j]&(1<<i);
           if(x>0)
           {
               p++;
               ar[j]=ar[j]^(1<<i);
           }
       }
       if(p>0)
       {
           ll t=(p+k-1)/k;
           ans+=t;
       }
       bool flag=true;
       for(int k=0;k<n;k++)
       {
           if(ar[k]>0)
           {
               flag=false;
               break;
           }
       }
       if(flag)break;
   }
   cout<<ans<<endl;
//    for(int i=0;i<n;i++)cout<<ar[i]<<" ";
//    cout<<endl;
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