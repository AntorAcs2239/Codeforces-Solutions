#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
bool fun1(ll n,ll b)
{
    for(int  i=1;;i++)
    {
        if(b*i==n)return true;
        if(b*i>n)break;
    }
    return false;
}
bool fun2(ll n,ll a)
{
    if(n%a==0)return true;
    else return false;
}
void solve()
{
   ll n,a,b;
   cin>>n>>a>>b;
   bool flag=false;
   ll t=1;
   while (t<=n)
   {
       if((n-t)%b==0)
       {
           flag=true;
           break;
       }
       if(a==1)break;
       t=t*a;
   }
   if(flag)cout<<"Yes"<<endl;
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