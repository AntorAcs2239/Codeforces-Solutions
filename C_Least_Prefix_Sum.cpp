#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,k;
    cin>>n>>k;
    ll ar[n+1], pre[n+1];
    for(int i=1;i<=n;i++)cin>>ar[i];
    pre[0]=0;
    for(int i=1;i<=n;i++)pre[i]=pre[i-1]+ar[i];
    priority_queue<ll>pq;
    ll kthv=pre[k];
    int ans=0;
    for(int i=k;i>=1;i--)
    {
        while(pre[i]<kthv)
        {
            ll tem=pq.top();
            pq.pop();
            kthv=kthv-tem*2;
            ans++;
        }
        if(ar[i]>0)pq.push(ar[i]);
    }
    while(!pq.empty())pq.pop();
    kthv=pre[k];
     for(int i=k+1;i<=n;i++)
    {
        if(ar[i]<0)pq.push(-ar[i]);
        while(pre[i]<kthv)
        {
            ll tem=pq.top();
            pq.pop();
            kthv=kthv-tem*2;
            ans++;
        }
    }
    cout<<ans<<endl;
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
    //  solve();
    return 0;
}