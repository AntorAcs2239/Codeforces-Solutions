#include<bits/stdc++.h>
using namespace std;
#define ll long long
void sol()
{
   ll n;
   cin>>n;
   ll ar[n];
   for(int i=1;i<=n;i++)
   {
       cin>>ar[i];
   }
   ll ans=INT_MAX;
   for(int i=1;i<=n;i++)
   {
           ll p=ar[i];
           ll count=0;
           while(p%2==0)
           {
               count++;
               p=p/2;
           }
           ans=min(ans,count);
   }
   cout<<ans<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}