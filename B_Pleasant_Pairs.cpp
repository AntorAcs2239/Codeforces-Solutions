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
   ll n;
   cin>>n;
   vector<ll>vec(2*n+1,0);
   for(int i=1;i<=n;i++)
   {
       int x;
       cin>>x;
       vec[x]=i;
   }
   ll ans=0;
   for(int i=1;i*(i+1)<=2*n;i++)
   {
       for(int j=i+1;j<=(2*n)/i;j++)
       {
           if(vec[i]&&vec[j]&&(vec[i]+vec[j]==i*j))
           {
               ans++;
           }
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
    //solve();
    return 0;
}