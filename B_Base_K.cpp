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
   ll k;
   string a,b;
   cin>>k;
   cin>>a>>b;
   ll x=0;
   ll t=0;
   for(int i=a.size()-1;i>=0;i--)
   {
       x+=pow(k,t)*(a[i]-'0');
       t++;
   }
   ll y=0;
   t=0;
   for(int i=b.size()-1;i>=0;i--)
   {
       y+=pow(k,t)*(b[i]-'0');
       t++;
   }
   cout<<x*y<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    // cin>>tc;
    // while(tc--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}