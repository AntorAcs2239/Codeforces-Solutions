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
    ll n;
    cin>>n;
    ll ar[n];
    ll br[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++)cin>>br[i];
    ll x=0,y=0;
    for(int i=0;i<n;i++)
    {
        x=max(y+ar[i],x);
        y=max(x+br[i],y);
    }
    cout<<max(x,y)<<endl;
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