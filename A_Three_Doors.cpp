#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    map<int,int>mp;
    mp[1]=a;
    mp[2]=b;
    mp[3]=c;
    int x=mp[n];
    map<int,int>tem;
    tem[n]=1;
    if(x!=0)
    {
        tem[x]=1;
        n=mp[x];
    }
    x=mp[n];
    if(x!=0)
    {
        tem[x]=1;
        n=mp[x];
    }
    x=mp[n];
    if(x!=0)
    {
        tem[x]=1;
        n=mp[x];
    }
    for(int i=1;i<=3;i++)
    {
        if(tem[i]==0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

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