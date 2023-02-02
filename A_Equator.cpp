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
   int ar[n];
   ll sum=0;
   for(int i=0;i<n;i++)
   {
       cin>>ar[i];
       sum+=ar[i];
   }
   ll t=(sum+1)/2;
   ll tem=0;
   for(int i=0;i<n;i++)
   {
       tem+=ar[i];
       if(tem>=t)
       {
           cout<<i+1<<endl;
           return;    
       }
   }
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