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
   ll n,m;
   cin>>n>>m;
   ll ar[m+1];
   for(int i=1;i<=m;i++)cin>>ar[i];
   ll ans=0;
   for(int i=2;i<=m;i++)
   {
       for(int j=1;j<i;j++)
       {
           if(ar[j]<ar[i])ans++;
       }
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
    return 0;
}