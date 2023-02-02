#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define gcd __gcd
void solve()
{
   ll n,m,k;
   cin>>n>>m>>k;
   ll ar[n];
   ll br[m];
   for(int i=0;i<n;i++)cin>>ar[i];
   for(int i=0;i<m;i++)
   {
       cin>>br[i];
   }
   int ans=0;
  sort(ar,ar+n);
  sort(br,br+m);
  int i=0,j=0;
  while (i<n&&j<m)
  {
     if(abs(ar[i]-br[j])<=k)
     {
         ans++;
         i++;
         j++;
     }
     else if(ar[i]-br[j]>k)
     {
         j++;
     }
     else 
     {
         i++;
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