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
   string s;
   cin>>s;
   int open_close=0,ans=0;
   for(int i=0;i<n;i++)
   {
       if(s[i]=='(')
       {
           open_close++;
           if(open_close==0)ans++;
       }
       else open_close--;
       if(open_close<0)ans++;
   }
   if(open_close!=0)cout<<"-1"<<endl;
   else cout<<ans<<endl;

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