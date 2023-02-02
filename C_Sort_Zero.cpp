#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,k;
    cin>>n;
    int ar[n+1];
    for(int i=1;i<=n;i++)cin>>ar[i];
    int idx=-1;
    for(int i=n-1;i>=1;i--)
    {
        if(ar[i]>ar[i+1])
        {
            idx=i+1;
            break;
        }
    }
    if(idx==-1)
    {
        cout<<"0"<<endl;
        return;
    }
    map<int,int>mp;
    for(int i=n;i>=idx;i--)
    {
        mp[ar[i]]=1;
    }
    map<int,int>tem;

    for(int i=1;i<idx;i++)
    {
        if(mp[ar[i]]==1)
        {
            tem[ar[i]]=1;
        }
    }
    int ans=idx-1;
    for(int i=n;i>=idx;i--)
    {
        if(tem[ar[i]]==1)
        {
            ans=max(ans,i);
        }
    }
    set<int>st;
    for(int i=1;i<=ans;i++)
    {
        st.insert(ar[i]);
    }
    cout<<st.size()<<endl;
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
    // solve();
    return 0;
}