#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans1=-1,ans2=-1;
    ll t=a*b;
    for(ll i=a+1;i<=c;i++)
    {
        ll t1=t/(__gcd(t,i));
        ll x=(d/t1)*t1;
        if(x>b)
        {
            ans1=i;
            ans2=x;
        }
    }
    cout<<ans1<<" "<<ans2<<endl;
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