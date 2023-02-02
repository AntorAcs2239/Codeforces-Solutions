#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll x, ll y)
{
    ll res = 1; // Initialize result
 
    // Update x if it is more than or
    // equal to p
    x = x;
 
    while (y > 0) {
       
        // If y is odd, multiply x
        // with the result
        if (y & 1)
            res = (res * x) ;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) ;
    }
    return res;
}
void sol()
{
    ll a,b;
    cin>>a>>b;
    if(b==1)cout<<a-1<<endl;
    else 
    {
        ll s=1;
        ll idx;
        ll tem;
        for(ll i=1;;i++)
        {
            tem=s;
            s+=tem;
            if(s>b)
            {
                idx=i;
                s-=tem;
                s+=b-s;
                break;
            }
        }
        idx=(s-(b-1))/b;
        cout<<idx<<endl;
    }
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    //sol();
    return 0;
}