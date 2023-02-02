#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    map<int,vector<int>>mp;
    for(int i=0;i<n;i++)
    {
        mp[ar[i]].push_back(i+1);
    }
    map<int,int>ans;
    for(auto x:mp)
    {
        int v=x.first;
        vector<int>vec;
        vec=x.second;
        int c=1;
        for(int i=1;i<vec.size();i++)
        {
            int p=(vec[i]-vec[i-1])-1;
            if(p%2==0)c++;
        }
        ans[v]=c;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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