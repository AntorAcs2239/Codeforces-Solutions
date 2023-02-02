#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ar[n], br[m];
    vector<pair<ll, ll>> st;
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int i = 0; i < m; i++)
    {
        cin >> br[i];
        st.push_back({br[i], i});
    }
    sort(st.begin(), st.end());
    ll j = 0;
    ll t1 = st[j].first;
    ll idx = st[j].second;
    ll m1 = 0;
    map<ll, ll> mp;
    int i=0;
    for (; i <n;)
    {
        if (ar[i] > t1)
        {
            mp[idx] = m1;
            j++;
            t1 = st[j].first;
            idx = st[j].second;
        }
        else 
        {
             m1 += ar[i];
             i++;
        }
    }
    for (int i = 0; i < m; i++)
        cout << mp[i] << " ";
    cout << endl;
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