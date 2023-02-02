#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mx 1e9
ll numoftrail(ll n)
{
    ll ans = 0;
    while (n % 10 == 0)
    {
        n = n / 10;
        ans++;
    }
    return ans;
}
ll r(ll a, ll b, ll t)
{
    ll ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans = ans * 5;
        if (ans > mx)
        {
            return 0;
        }
    }
    for (int i = 1; i <= b; i++)
    {
        ans *= 2;
        if (ans > mx)
            return 0;
    }
    return ans;
}
ll r2(ll a, ll b)
{
    ll ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans = ans * 5;
        if (ans > mx)
        {
            return 0;
        }
    }
    for (int i = 1; i <= b; i++)
    {
        ans *= 2;
        if (ans > mx)
            return 0;
    }
    return ans;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll tem = 1;
    int five = 0;
    while (tem < 1e9)
    {
        tem = tem * 5;
        five++;
    }
    tem = 1;
    int two = 0;
    while (tem < 1e9)
    {
        tem = tem * 2;
        two++;
    }
    int t = 0, f = 0;
    tem = n;
    while (tem % 5 == 0)
    {
        f++;
        tem = tem / 5;
    }
    tem = n;
    while (tem % 2 == 0)
    {
        tem = tem / 2;
        t++;
    }
    ll ans = numoftrail(n * m);
    ll ans2 = n * m;
    for (int i = 0; i <= five; i++)
    {
        for (int j = 0; j <= two; j++)
        {
            ll p = r(i + f, j + t, m);
            if (p != 0)
            {
                ll rr = r2(i + f, j + t);
                cout<<rr<<endl;
                if (rr != 0&&rr<=m)
                {
                    ll t1=m/rr;
                    ll t2=rr*t1;
                    rr=t2;
                    ll z = numoftrail(rr * n);
                    if (z >= ans)
                    {
                        ans = z;
                        ans2 = rr * n;
                    }
                }
            }
        }
    }
    cout << ans2 << endl;
     cout<<endl;
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
    //  solve();
    return 0;
}