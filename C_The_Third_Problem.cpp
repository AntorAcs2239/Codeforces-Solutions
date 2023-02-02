#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll x, ll y, ll p)
{
 
    ll res = 1;
 
    // Check till the number becomes zero
    while (y > 0) {
 
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x);
 
        // y = y/2
        y = y >> 1;
 
        // Change x to x^2
        x = (x * x);
    }
    return res % p;
}
void solve()
{
    ll n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    vector<int>vec1,vec2;
    int p;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==0)
        {
            p=i;
            break;
        }
    }
    for(int i=0;i<p;i++)vec1.push_back(ar[i]);
    for(int i=p+1;i<n;i++)vec2.push_back(ar[i]);
     int s1=vec1.size(),s2=vec2.size();
    vec1.push_back(0);
    vec2.push_back(0);
    sort(vec1.begin(),vec1.end());
    sort(vec2.begin(),vec2.end());
    int x1=0,x2=0;
    for(int i=0;i<vec1.size();i++)
    {
        if(vec1[i]!=i)
        {
            x1=vec1.size()-i;
            break;
        }
    }
     for(int i=0;i<vec2.size();i++)
    {
        if(vec2[i]!=i)
        {
            x2=vec2.size()-i;
            break;
        }
    }
    cout<<x1<<" "<<x2<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}