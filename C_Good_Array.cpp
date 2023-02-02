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
    ll n;
    cin>>n;
    ll ar[n];
    map<ll,ll>mp;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        mp[ar[i]]++;
        sum+=ar[i];
    }
    ll ans=0;
    vector<ll>final;
    for(int i=0;i<n;i++)
    {
        ll t=sum-ar[i];
        if(t%2==0)
        {
            mp[ar[i]]--;
            if(mp[t/2]>=1)final.push_back(i+1);
            mp[ar[i]]++;
        }
    }
    cout<<final.size()<<endl;
    for(int i=0;i<final.size();i++)cout<<final[i]<<" ";
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