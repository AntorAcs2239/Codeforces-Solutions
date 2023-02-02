#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
map<ll,ll>mp;
void sett()
{
     ll tem=0;
    for(ll i=1;i<=100005;i++)
    {
        tem+=(pow(i,3)*((9*i-3)))/(6*i*i); mp[i]=tem/i;
    }
}
void solve()
{
    ll n;
    cin>>n;
    cout<<mp[n]<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sett();
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    //solve();
    return 0;
}