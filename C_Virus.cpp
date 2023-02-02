#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, x;
    cin >> x >> n;
    ll ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    vector<ll> vec;
    ll t = 1;
    sort(ar, ar + n);
    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        vec.push_back(ar[i] - ar[i - 1] - 1);
    }
    ll tem = ar[0] - 1 + x - ar[n - 1];
    if (tem > 0)
        vec.push_back(tem);
    sort(vec.rbegin(), vec.rend());
    ll k = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        ll tem = vec[i] - k * 2;
        if (tem > 0)
        {
            ans += max((ll)1, tem - 1);
        }
        k += 2;
    }
    cout << x - ans << endl;
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