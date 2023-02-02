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
   int n;
   cin>>n;
   ll ar[n+1];
   ll sum=0;
   ar[0]=0;
   for(int i=1;i<=n;i++)
   {
       cin>>ar[i];
       sum+=ar[i];
   }
   sort(ar+1,ar+n+1);
   ll ans=0;
   ll tem=0;
   for(int i=1;i<n;i++)
   {
      tem+=ar[i];
      ll a=sum-tem;
      ans+=a-(n-i)*ar[i];
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