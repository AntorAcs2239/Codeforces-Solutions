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
    k=n;
    int ar[n+2];
    for(int i=1;i<=n+1;i++)ar[i]=0;
    map<int,int>mp;
   for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        ar[x]++;
        ar[y+1]--;
        if(i>=x&&i<=y)mp[i]=1;
    }
    for(int i=2;i<=k;i++)ar[i]=ar[i-1]+ar[i];
    vector<int>ans;
    for(int i=1;i<=k;i++)
    {
        if(ar[i]>=k-1&&mp[i]==0)ans.push_back(i);
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<endl;
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