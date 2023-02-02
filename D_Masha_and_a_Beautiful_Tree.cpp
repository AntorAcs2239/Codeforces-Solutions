#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    int ar[n+1];
    for(int i=1;i<=n;i++)cin>>ar[i];
    int ans=0;
    int t=log2(n);
    for(int j=1;j<=t;j++)
    {
        ll v=pow(2,j);
        int m1=INT_MAX,m2=INT_MAX;
        int c=0,m=0,mi=INT_MAX,mx=INT_MIN;
        for(int i=1;i<=n;i++)
        {
            c++;
            m++;
            mi=min(mi,ar[i]);
            mx=max(mx,ar[i]);
            if(c<=v/2)
            {
                m1=min(m1,ar[i]);
            }
            else 
            {
                m2=min(m2,ar[i]);
            }
            if(m==v)
            {
                if((mx-mi)!=v-1)
                {
                    cout<<"-1"<<endl;
                    return;
                }
                if(m1>m2)
                {
                    ans++;
                    //cout<<v<<endl;
                }
                c=0,m=0,m1=INT_MAX,m2=INT_MAX;
                mx=INT_MIN,mi=INT_MAX;
            }
        }
    }
    cout<<ans<<endl;
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
    //  solve();
    return 0;
}