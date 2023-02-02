#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    ll ar[n];
    ll a=0,b=0;
    int last=-1;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=n-1;i>0;i--)
    {
        if(ar[i]!=0)
        {
            last=i;
            break;
        }
    }
    ll sum=0;
    bool flag=true;
    for(int i=last;i>0;i--)
    {
        if(ar[i]>=sum)
        {
            flag=false;
            break;
        }
        sum-=ar[i];
    }
    //cout<<sum<<endl;
    if(ar[0]!=sum)
    {
        cout<<"No"<<endl;
        return;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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