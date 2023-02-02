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
    ll a,b;
    cin>>a>>b;
    ll t=a-1;
    ll sum=0;
    for(int i=1;i<=a;i++)
    {
        sum+=i;
        if((sum-t)==b)
        {
            cout<<t<<endl;
            return;
        }
        t--;
    }
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