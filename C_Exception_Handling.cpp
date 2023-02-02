#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
void solve()
{
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    int pre[n+1];
    int suf[n+1];
    pre[0]=INT_MIN;
    suf[n+1]=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        pre[i]=max(pre[i-1],ar[i]);
    }
    for(int i=n;i>=1;i--)
    {
        suf[i]=max(suf[i+1],ar[i]);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<max(pre[i-1],suf[i+1])<<endl;
    }
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