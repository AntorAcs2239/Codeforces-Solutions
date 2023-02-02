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
ll power(ll x, ll y, ll p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
ll dp[100010];
void solve()
{
   cout<<dp[12]<<endl;
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k=1;
    for(int i=1;i<=9;i++)dp[i]=i;
    k=10;
    for(int i=10;i<=99;i++)
    {
        string t=to_string(i);
        string p=t;
        p.pop_back();
        reverse(p.begin(),p.end());
        t+=p;
        ll x=stoi(t);
        dp[k]=x;
        k++;
    }
     for(int i=100;i<=999;i++)
    {
        string t=to_string(i);
        string p=t;
        p.pop_back();
        reverse(p.begin(),p.end());
        t+=p;
        ll x=stoi(t);
         dp[k]=x;
        k++;
    }
     for(int i=1000;i<=9999;i++)
    {
        string t=to_string(i);
        string p=t;
        p.pop_back();
        reverse(p.begin(),p.end());
        t+=p;
        ll x=stoi(t);
    
         dp[k]=x;
        k++;
    }
     for(int i=10000;i<=99999;i++)
    {
        string t=to_string(i);
        string p=t;
        p.pop_back();
        reverse(p.begin(),p.end());
        t+=p;
        ll x=stoi(t);
       
         dp[k]=x;
        k++;
    }
    for(int i=100000;i<=100005;i++)
    {
        string t=to_string(i);
        string p=t;
        p.pop_back();
        reverse(p.begin(),p.end());
        t+=p;
        ll x=stoll(t);
         dp[k]=x;
        k++;
    }
    solve();
    return 0;
}