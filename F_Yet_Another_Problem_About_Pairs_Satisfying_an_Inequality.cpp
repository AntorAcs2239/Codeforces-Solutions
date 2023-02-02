#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    ll ar[n+1];
    for(int i=1;i<=n;i++)cin>>ar[i];
    ll pre[n+1];
    pre[0]=0;
    for(int i=1;i<=n;i++)
    {
        if(ar[i]<i)
        {
            pre[i]=pre[i-1]+1;
        }
        else pre[i]=pre[i-1];
    }
    ll ans=0;
    for(int i=n;i>=1;i--)
    {
        if(ar[i]<i&&ar[i]!=0)
        {
            ans+=pre[ar[i]-1];
        }
    }
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