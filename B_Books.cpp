#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ar[n+1];
    for(int i=1;i<=n;i++)cin>>ar[i];
    ll tem=0;
    ll ans=INT_MIN;
    ll i,j;
    for(i=1,j=1;j<=n;)
    {
        tem+=ar[j];
        if(tem<=k)
        {
            j++;
        }
        else 
        {
            ans=max(ans,j-i);
            tem=tem-ar[i];
            j++;
            i++;
        }
    }
    ans=max(ans,j-i);
    cout<<ans<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int tc;
    // cin>>tc;
    // while(tc--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}