#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,k;
    cin>>n>>k;
    int ans=0;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    map<int,int>mp;
    for(int i=1;i<=k;i++)mp[i]=1;
    for(int i=0;i<k;i++)
    {
        if(mp[ar[i]]==1)ans++;
    }
    cout<<k-ans<<endl;
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