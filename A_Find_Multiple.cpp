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
   int a,b,c;
   cin>>a>>b>>c;
   for(int i=a;i<=b;i++)
   {
       if(i%c==0)
       {
           cout<<i<<endl;
           return;
       }
   }
   cout<<"-1"<<endl;
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