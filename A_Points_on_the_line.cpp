#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
void solve()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int ans=INT_MIN;
    sort(ar,ar+n);
    for(int i=0;i<n;i++)
    {
        int tem=ar[i];
        int sal=1;
        for(int j=i+1;j<n;j++)
        {
            if(ar[j]-tem<=k)sal++;
        }
        ans=max(ans,sal);
    }
    cout<<n-ans<<endl;
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