#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll x, ll  y,  ll p)
{
    ll res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = ((res%mod)*(x%mod)) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = ((x%p)*(x%mod))% p;
    }
    return (res%p)-1;
}
void solve()
{
    ll n,k;
    cin>>n;
    ll ar[n];
    int z=0,p=0,neg=0;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==0)z++;
        else if(ar[i]<0)neg++;
        else p++;
        sum+=ar[i];
    }
    if(p>2||neg>2)
    {
        cout<<"NO"<<endl;
        return;
    }
    vector<ll>vec;
    for(int i=0;i<n;i++)
    {
        if(ar[i]!=0)vec.push_back(ar[i]);
    }
    if(z>0)
    {
        if(z==1)vec.push_back(0);
        else
        {
            vec.push_back(0);
            vec.push_back(0);
        }
    }
    if(z==n)
    {
        cout<<"YES"<<endl;
        return;
    }
    bool flag=true;
    if(vec.size()==1||vec.size()==2)
    {
        cout<<"YES"<<endl;
        return;
    }
    map<ll,ll>mp;
    for(int i=0;i<vec.size();i++)mp[vec[i]]=1;
    for(int i=0;i<vec.size();i++)
    {
        for(int j=i+1;j<vec.size();j++)
        {
            for(int k=j+1;k<vec.size();k++)
            {
                ll s=vec[i]+vec[j]+vec[k];
                if(mp[s]==0)
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"YES"<<endl;
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
     //solve();
    return 0;
}