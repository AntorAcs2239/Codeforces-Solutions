#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
void solve()
{
    ll n;
    cin>>n;
    ll ar[n],br[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)cin>>br[i];
    for(int i=0;i<n;i++)
    {
        tem[i]=ar[i]-br[i];
    }
    sort(tem,tem+n);
    ll ans=0;
    for(int i=n-1;i>=1;i--)
    {
        ll mid;
        ll low=0;
        ll high=i-1;
        ll value=tem[i];
        ll t=-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if((tem[mid]+value)>0)
            {
                t=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        if(t!=-1)
        {
            ans+=i-1-t+1;
        }
        else break;
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
}