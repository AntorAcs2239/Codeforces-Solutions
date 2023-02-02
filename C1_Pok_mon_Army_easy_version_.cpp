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
   int ar[n+1];
   for(int i=1;i<=n;i++)cin>>ar[i];
   ll ans=0;
   int maxx;
   int minn;
   for(int i=1;i<=n;i++)
   {
       maxx=ar[i];
       if(i<n)minn=ar[i+1];
       else minn=0;
       ans+=max(0,maxx-minn);
   }
   cout<<ans<<endl;
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
   // solve();
    return 0;
}