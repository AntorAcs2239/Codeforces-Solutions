#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
void solve()
{
   ll n;
   cin>>n;
   ll ar[n];
   map<ll,ll>mp;
   for(int i=0;i<n;i++)
   {
       cin>>ar[i];
       mp[ar[i]]++;
   }
   sort(ar,ar+n);
   ll t=ar[0];
   for(int i=0;i<n;i++)
   {
       if(ar[i]>t)
       {
           t=ar[i];
           break;
       }
   }
   if(t>ar[0]*2)
   {
       cout<<n-mp[ar[0]]<<endl;
   }
   else if(t==ar[0])cout<<"0"<<endl;
   else cout<<n<<endl;
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