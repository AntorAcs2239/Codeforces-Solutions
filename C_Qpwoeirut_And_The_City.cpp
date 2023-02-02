#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    ll tem=n-2;
    if(tem%2==0)
    {
        ll ans1=0,ans2=0;
        ll pre[n+5];
        pre[n]=0;
        for(int i=0;i<=n+5;i++)pre[i]=0;
        ll x=1;
        ll t=0;
        for(int i=n-2;i>=1;i--)
        {
             if(x%2==1)
             {
                int m=max(ar[i-1],ar[i+1]);
                t+=max((ll)0,m-ar[i]+1);
                pre[i]=t;
             }
             else pre[i]=t;
             x++;
        }
        ll ans3=LLONG_MAX;
        ll m=max(ar[0],ar[2]);
        t=max((ll)0,m-ar[1]+1);
        vector<ll>ab;
        x=0;
        for(int i=3;i<n-2;i+=2)
        {
            ll mx=max(ar[i],ar[i+2]);
            ll a=max((ll)0,mx-ar[i+1]+1);
            ll m1=max(ar[i-1],ar[i+1]);
             ans3=min(ans3,t+x+pre[i+3]);
            x+=max((ll)0,m1-ar[i]+1);
        }
        //cout<<ans3<<endl;
        for(int i=1;i<n-1;i+=2)
        {
            ll m=max(ar[i-1],ar[i+1]);
            ans1+=max((ll)0,m-ar[i]+1);
        }
        for(int i=2;i<n-1;i+=2)
        {
            ll m=max(ar[i-1],ar[i+1]);
            ans2+=max((ll)0,m-ar[i]+1);
        }
        cout<<min({ans1,ans2,ans3})<<endl;
    }
    else 
    {
        ll ans=0;
        for(int i=1;i<n-1;i+=2)
        {
            ll m=max(ar[i-1],ar[i+1]);
            ans+=max((ll)0,m-ar[i]+1);
        }
        cout<<ans<<endl;
    }
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