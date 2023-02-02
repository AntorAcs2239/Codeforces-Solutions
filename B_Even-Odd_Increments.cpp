#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n,q;
    cin>>n>>q;
    ll ar[n];
    ll odd=0,even=0;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]%2==0)even++;
        else odd++;
        sum+=ar[i];
    }
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==1)
        {
            ll t=odd*b;
            sum+=t;
            cout<<sum<<endl;
            if(b%2==1)
            {
                odd=0;
                even=n;
            }
        }
        else 
        {
            ll t=even*b;
            sum+=t;
            cout<<sum<<endl;
            if(b%2==1)
            {
               even=0;
               odd=n;
            }
        }
    }
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