#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll x, ll y, ll p)
{
    ll res = 1; // Initialize result
 
    // Update x if it is more than or
    // equal to p
    x = x % p;
 
    while (y > 0) {
       
        // If y is odd, multiply x
        // with the result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
void sol()
{
   ll a,b,c,d;
   cin>>a>>b>>c>>d;
   int t=(a+c-1)/c;
   int time=t*b;
   int case1=time;
   int x=(a*d)/time;
   a-=x;
   int time2=(a+c-1)/c;
   int x2=(time2+1)/2;
   int case2=(x2*b)+d;
   if(case1>case2)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin>>t;
    // while(t--)
    // {
    //     sol();
    // }
    sol();
    return 0;
}