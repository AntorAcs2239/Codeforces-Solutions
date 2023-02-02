#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
void solve()
{
    ll n;
    cin>>n;
    ll ar[n+1];
    ll br[n];
    for(int i=0;i<=n;i++)cin>>ar[i];
    for(int i=0;i<n;i++)cin>>br[i];
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll a=min(ar[i],br[i]);
        br[i]-=a;
        ll b=min(ar[i+1],br[i]);
        ar[i+1]-=b;
        ans+=a+b;
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int tc;
    // cin>>tc;
    // while(tc--)
    // {
    //     solve();
    // }
    solve();
}