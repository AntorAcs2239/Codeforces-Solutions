#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,q;
    cin>>n>>q;
    ll ar[n+1];
    for(int i=1;i<=n;i++)cin>>ar[i];
    ll suf[n+1];
    ll pre[n+1];
    pre[1]=0;
    pre[0]=0;
    ll t=0;
    for(int i=2;i<=n;i++)
    {
         t+=max((ll)0,ar[i-1]-ar[i]);
        pre[i]=t;
    }
    suf[1]=0;
    suf[0]=0;
    t=0;
    for(int i=2;i<=n;i++)
    {
        t+=max((ll)0,ar[i]-ar[i-1]);
        suf[i]=t;
    }
    while(q--)
    {
        ll u,v;
        cin>>u>>v;
        if(u<v)
        {
            cout<<pre[v]-pre[u]<<endl;
        }
        else 
        {
          cout<<suf[u]-suf[v]<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
     solve();
    return 0;
}