#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define gcd __gcd
void solve()
{
    int n;
    cin>>n;
    map<int,int>mp;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        mp[ar[i]]++;
    }
    ll sum=0;
    for(auto a:mp)
    {
        sum+=a.second;
    }
    ll tem;
    ll ans=0;
    for(auto a:mp)
    {
        sum-=a.second;
        ans+=a.second*sum;
    }
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