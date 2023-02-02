#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'
void solve()
{
    ll n;
    cin >> n;
    ll ar[n + 1];
    ll br[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> ar[i];
    for (int i = 1; i <= n; i++)
        cin >> br[i];
    vector<pair<pair<ll,ll>, ll>> st;
    for (int i = 1; i <= n; i++)
    {
        st.push_back({make_pair(ar[i]+br[i],br[i]),i});
    }
    sort(st.begin(), st.end());
    ll ans=0;
    for(int i=0;i<st.size()-1;i++)
    {
        ll x=st[i].second;
        if(x>1&&x<n)ans+=2*st[i].first.second;
        else ans+=st[i].first.second;
    }
    for(int i=1;i<=n;i++)ans+=ar[i];
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