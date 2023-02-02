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
   ll a,b;
   cin>>a>>b;
   ll tem=(a+1)/2;
   if(a%2==1)
   {
       cout<<b/tem<<endl;
   }
   else 
   {
       tem--;
       a-=tem;
       cout<<b/a<<endl;
   }
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
    return 0;
}