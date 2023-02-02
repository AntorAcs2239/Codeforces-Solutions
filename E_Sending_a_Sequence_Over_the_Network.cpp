#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    ll ar[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> ar[i];
    ll dp[n + 1];
    for(int i=1;i<=n;i++)dp[i]=0;
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        if ((i - ar[i] - 1) >= 0 && dp[i - ar[i] - 1]==1)
        {
            dp[i] = 1;
        }
        if ((i + ar[i]) <= n && dp[i - 1]==1)
        {
            dp[i + ar[i]] = 1;
        }
    }
    if(dp[n]==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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