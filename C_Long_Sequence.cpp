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
   ll  n,x;
   cin>>n;
   ll ar[n+1];
   ll tem=0;
   for(int i=1;i<=n;i++)
   {
       cin>>ar[i];
       tem+=ar[i];
   }
   cin>>x;
   ll t=x/tem;
   x-=t*tem;
   ll xtem=0;
   ll idx;
   for(int i=1;i<=n;i++)
   {
       if(xtem>x)break;
       idx=i;
       xtem+=ar[i];
   }
   idx+=t*n;
   cout<<idx<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    // cin>>tc;
    // while(tc--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}