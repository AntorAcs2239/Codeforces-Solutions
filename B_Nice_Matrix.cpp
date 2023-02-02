#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
void solve()
{
    int n,m;
    cin>>n>>m;
    ll ar[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>ar[i][j];
        }
    }
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            vector<ll>vec;
           vec.push_back(ar[i][j]);
            vec.push_back(ar[i][m-j+1]);
             vec.push_back(ar[n-i+1][j]);
              vec.push_back(ar[n-i+1][m-j+1]);
            // ans+=vec[1]-vec[0];
            // ans+=vec[3]-vec[2];
            // ans+=(vec[2]-vec[1])*2;
            sort(vec.begin(),vec.end());
            ll mid=vec[2];
            ans+=abs(vec[0]-mid)+abs(vec[1]-mid)+abs(vec[2]-mid)+abs(vec[3]-mid);
        }
    }
    cout<<ans/4<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    //solve();
    return 0;
}