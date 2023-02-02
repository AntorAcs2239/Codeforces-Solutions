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
   ll ar[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   vector<ll>final;
   final.push_back(0);
   for(int i=1;i<n;i++)
   {
       ll previous=ar[i-1]^final.back();
       ll current=ar[i];
       ll value=0;
       for(int i=0;i<30;i++)
       {
           if((1ll<<i)&previous)
           {
               if(!((1ll<<i)&current))
               {
                   value=value|(1<<i);
               }
           }
       }
       final.push_back(value);
   }
   for(int i=0;i<final.size();i++)cout<<final[i]<<" ";
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
    //solve();
    return 0;
}