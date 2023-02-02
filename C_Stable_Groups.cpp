#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define gcd __gcd
void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    ll ans=0;
    sort(ar,ar+n);
    ll t=0;
    vector<ll>vec;
    for(int i=1;i<n;i++)
    {
        if((ar[i]-ar[i-1])>k)
        {
            ans++;
            ll p=ar[i]-ar[i-1];
            vec.push_back(p);
            p--;
            t+=p/k;
        }
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
    {
       ll a=vec[i]/k;
       a-=(vec[i]%k==0);
       if(a<=m)
       {
           ans--;
           m-=a;
       }
    }
    cout<<ans+1<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    // cin>>tc;
    // while(tc--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}