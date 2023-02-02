#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ar[n];
    ll br[k];
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<k;i++)cin>>br[i];
    sort(br,br+k,greater<int>());
    sort(ar,ar+n);
    ll j=0;
    ll sum=0;
    for(int i=0;;)
    {
        if(j==k)break;
        int t=br[j]-1;
        if(t>0)sum+=ar[i];
        i+=t;
        j++;
    }
    j=k-1;
    for(int i=n-1;i>=0;i--)
    {
        if(j<0)break;
        if(br[j]==1)sum+=2*ar[i];
        else sum+=ar[i];
        j--;
    }
    cout<<sum<<endl;
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
}