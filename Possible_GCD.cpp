#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007
#define gcd __gcd
vector<int> store;
bool ans = false;
void flag(int ar[], int i, int n, int s)
{
    if (i == n)
    {
        if (s % 360 == 0)
            ans = true;
        return;
    }
    else
    {
        flag(ar, i + 1, n, s + ar[i]);
        flag(ar, i + 1, n, s - ar[i]);
    }
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll t=abs(n-m);
    ll ans = 0;
    for (ll i = 1; i <= sqrt(t); i++)
    {
        if(t%i==0)
        {
            if(t/i==i)ans++;
            else ans+=2;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    //solve();
    return 0;
}