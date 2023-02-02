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
    int n;
    cin>>n;
    ll ar[n+1];
    map<ll,ll>mp;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        mp[ar[i]]=i;
    }
    sort(ar+1,ar+n+1);
    ll t=ar[n-1];
    cout<<mp[t]<<endl;
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