#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
void solve()
{
    ll n;
    cin>>n;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    ll tem=ar[n-1];
    for(int i=0;i<n;i++)
    {
        ar[i]=ar[i]^tem;
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans|ar[i];
    }
    cout<<tem<<" "<<ans<<endl;
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
   // solve();
    return 0;
}