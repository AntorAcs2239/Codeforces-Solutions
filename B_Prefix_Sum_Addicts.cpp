#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ar[k];
    for (int i = 0; i < k; i++)
    {
        cin >> ar[i];
    }
    vector<ll> vec;
    if (ar[0] < 0)
    {
        ll t = -ar[0];
        ll x = n - k + 1;
        t = t / x;
        t = -t;
        vec.push_back(t);
    }
    else
    {
        ll t = ar[0];
        ll x = n - k + 1;
        t = (t + x - 1) / x;
        vec.push_back(t);
    }
    for (int i = 1; i < k; i++)
        vec.push_back(ar[i] - ar[i - 1]);
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] < vec[i - 1])
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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