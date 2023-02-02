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
   ll n,m;
   cin>>n>>m;
   ll t=(n+1)/2;
   if(n==1)cout<<"1"<<endl;
   else if(m==t)
   {
       if(n%2==1)cout<<m-1<<endl;
       else cout<<m+1<<endl;
   }
   else if(m>t)cout<<m-1<<endl;
   else cout<<m+1<<endl;
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