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
   int ar[2*n];
   int odd=0,even=0;
   for(int i=0;i<2*n;i++)
   {
       cin>>ar[i];
       if(ar[i]%2==1)odd++;
       else even++;
   }
   if(odd==even)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
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