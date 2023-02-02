#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
void solve()
{
   ll n;
   cin>>n;
   if(n%11==0||n%111==0)
   {
       cout<<"YES"<<endl;
       return;
   }
   if(n<111)
   {
       cout<<"NO"<<endl;
       return;
   }
   ll x=1;
   while(1)
   {
       ll tem=n-11*x;
       if(tem%111==0)
       {
           cout<<"YES"<<endl;
           return;
       }
       if(tem<0)break;
       x++;
   }
   cout<<"NO"<<endl;
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
}