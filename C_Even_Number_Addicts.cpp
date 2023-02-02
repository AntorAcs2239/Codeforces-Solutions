#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    ll ar[n];
    int e = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
            e++;
        else
            o++;
    }
    int t = (n + 1) / 2;
    for (int odd = 0; odd <= t; odd += 2)
    {
        ll even=t-odd;
        if(even*2<=e+1)
        {
            if(odd*2<=o)
            {
                cout<<"Alice"<<endl;
                return;
            }
        }
         if(odd*2<=o+1)
        {
            if(even*2<=e)
            {
                cout<<"Alice"<<endl;
                return;
            }
        }
    }
    cout<<"Bob"<<endl;
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