#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    ll ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    vector<ll> sum;
    ll tem = 0;
    for (int i = 0; i < n; i++)
    {
        tem += ar[i];
        sum.push_back(tem);
    }
    ll ans=n;
    for (int i = 0; i < sum.size(); i++)
    {
        bool flag=true;
        ll t=0;
        ll m=INT_MIN;
        ll s=0,e=0,j;
        for( j=0;j<n;j++)
        {
            t+=ar[j];
            if(t==sum[i])
            {
                m=max(m,j-s+1);
                s=j+1;
                t=0;
            }
            else if(t>sum[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            if(t==0)
            {
                ans=min(ans,m);
            }
            else if(t==sum[i])
            {
                ans=min({ans,j-s,m});
            }
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
    //  solve();
    return 0;
}