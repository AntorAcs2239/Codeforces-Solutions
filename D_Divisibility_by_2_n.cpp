#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    ll two=0;
    for(int i=0;i<n;i++)
    {
        while(ar[i]%2==0)
        {
            two++;
            ar[i]/=2;
        }
    }
    if(two>=n)
    {
        cout<<"0"<<endl;
        return;
    }
    vector<ll>vec;
    for(ll i=1;i<=n;i++)
    {
        ll x=0;
        ll t=i;
        while(t%2==0)
        {
            x++;
            t=t/2;
        }
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    ll ans=0;
    for(int i=0;i<vec.size();i++)
    {
        two+=vec[i];
        ans++;
        if(two>=n)
        {
            cout<<ans<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
    
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