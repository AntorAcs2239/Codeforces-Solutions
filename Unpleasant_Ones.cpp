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
   ll ar[n];
   vector<ll>odd;
   vector<ll>even;
   for(int i=0;i<n;i++)
   {
       cin>>ar[i];
       if(ar[i]%2==0)even.push_back(ar[i]);
       else odd.push_back(ar[i]);
   }
   sort(ar,ar+n);
   for(int i=0;i<n;i++)cout<<ar[i]<<" ";
   cout<<endl;
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