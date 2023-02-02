#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,m;
    cin>>n>>m;
    string s;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    map<int,int>mp;
    for(int i=1;i<=m;i++)s+='B';
    for(int i=0;i<n;i++)
    {
        int t=ar[i]-1;
        int t2=m+1-ar[i];
        t2--;
        if(t>t2)swap(t,t2);
        if(mp[t]==0)
        {
            s[t]='A';
            mp[t]=1;
        }
        else 
        {
            s[t2]='A';
            mp[t2]=1;
        }
    }
    cout<<s<<endl;
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