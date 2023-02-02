#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll zero=0,one=0;
    ll a=0,b=0;
    ll ans=-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            a++;
            ans=max(ans,b*b);
            zero++;
            b=0;
        }
        else
        {
            b++;
            one++;
            ans=max(ans,a*a);
            a=0;
        }
    }
    ans=max(ans,a*a);
    ans=max(ans,b*b);
    ans=max(ans,one*zero);
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