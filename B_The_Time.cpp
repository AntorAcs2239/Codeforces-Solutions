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
    string a;
    int n;
    cin>>a;
    cin>>n;
    int h=n/60;
    int min=n%60;
    string hour;
    hour+=a[0];
    hour+=a[1];
    string minn;
    minn+=a[3];
    minn+=a[4];
    int hourint=stoi(hour);
    int minnint=stoi(minn);
    hourint=(hourint+h)%24;
    int extra=(minnint+min)/60;
    int extra2=(minnint+min)%60;
    hourint=(hourint+extra)%24;
    if(hourint<10)
    {
        cout<<"0"<<hourint<<":";
    }
    else 
    {
        cout<<hourint<<":";
    }
    if(extra2<10)
    {
        cout<<"0"<<extra2<<endl;
    }
    else cout<<extra2<<endl;
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