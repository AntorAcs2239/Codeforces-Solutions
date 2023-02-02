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
    ll n,w;
    cin>>n>>w;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    ll tem=0;
    vector<ll>final;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>=((w+1)/2)&&(ar[i]<=w))
        {
            cout<<"1"<<endl;
            cout<<i+1<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]<w)
        {
            tem+=ar[i];
            final.push_back(i+1);
        }
        if(tem>=(w+1)/2)break;
    }
    if(final.size()==0||tem<(w+1)/2)
    {
        cout<<"-1"<<endl;
        return;
    }
    cout<<final.size()<<endl;
    for(int i=0;i<final.size();i++)
    {
        cout<<final[i]<<" ";
    }
    cout<<endl;
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
    return 0;
}