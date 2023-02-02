#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
void solve()
{
    int n;
    double x,y;
    cin>>n>>x>>y;
    pair<double,double>ar[n+1];
    for(int i=0;i<n;i++)
    {
        double p,q;
        cin>>p>>q;
        ar[i].first=p;
        ar[i].second=q;
    }
    map<pair<int,int>,int>mp;
    for(int i=0;i<n;i++)
    {
        int a=y-ar[i].second;
        int b=x-ar[i].first;
        int g=gcd(a,b);
        a=a/g;
        b=b/g;
        mp[{a,b}]++;
    }
    cout<<mp.size()<<endl;
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