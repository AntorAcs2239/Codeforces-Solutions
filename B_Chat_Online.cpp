#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
ll convert(string t)
{
    ll ans=0;
    ll tem=1;
    for(int i=t.size()-1;i>=0;i--)
    {
        ans=ans+(t[i]-'0')*tem;
        tem=tem*10;
    }
    return ans;
}
void solve()
{
    int a,b,l,r;
    cin>>a>>b>>l>>r;
    pair<int,int>ar[a+b];
    for(int i=1;i<=a+b;i++)
    {
        int u,v;
        cin>>u>>v;
        ar[i].first=u;
        ar[i].second=v;
    }
    int ans=0;
    for(int i=l;i<=r;i++)
    {
        bool check=false;
        for(int j=a+1;j<=a+b;j++)
        {
            int x=ar[j].first+i;
            int y=ar[j].second+i;
            for(int k=1;k<=a;k++)
            {
                int p=ar[k].first;
                int q=ar[k].second;
                if(p>y||q<x)continue;
                else 
                {
                    ans++;
                    check=true;
                    break;
                }
            }
            if(check)break;
        }
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
    return 0;
}