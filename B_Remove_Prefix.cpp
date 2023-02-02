#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)cin>>ar[i],mp[ar[i]]++;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        int t=mp[ar[i]];
        if(t>1)
        {
            ans=i;
        }
        mp[ar[i]]--;
    }
    cout<<ans+1<<endl;
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