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
    int n;
    cin>>n;
    int ar[n+1];
    int br[n+1];
    for(int i=1;i<=n;i++)cin>>ar[i],br[i]=i;
    if(n==1)
    {
        cout<<"-1"<<endl;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(ar[i]==br[i])
        {
            if(i==1)
            {
                swap(br[i],br[i+1]);
            }
            else if(i==n)swap(br[i],br[i-1]);
            else swap(br[i],br[i+1]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<br[i]<<" ";
    }
    cout<<endl;
    
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