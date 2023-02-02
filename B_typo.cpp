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
    string a,b;
    cin>>a>>b;
    int c=0;
    for(int i=0;i<a.size()-1;i++)
    {
        if(a[i]!=b[i])
        {
            if((a[i]==b[i+1])&&(a[i+1]==b[i]))
            {
                swap(a[i],a[i+1]);
                break;
            }
        }
    }
    if(a==b)
    {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
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