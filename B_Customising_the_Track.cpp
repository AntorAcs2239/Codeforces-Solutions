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
   ll sum=0;
   for(int i=0;i<n;i++){
       ll x;
       cin>>x;
       sum+=x;
   }
   cout<<(sum<n?(n-sum)*sum:(sum%n)*(n-(sum%n)))<<endl;
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