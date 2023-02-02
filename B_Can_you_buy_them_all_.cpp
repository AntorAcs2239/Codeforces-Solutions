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
   ll sum=0;
   for(int i=1;i<=n;i++)
   {
       cin>>ar[i];
       if(i%2==1)sum+=ar[i];
       else sum+=ar[i]-1;
   }
   if(sum<=m)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
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