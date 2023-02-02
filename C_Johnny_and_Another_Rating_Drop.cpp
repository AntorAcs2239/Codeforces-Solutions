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
    ll sum=0;
    ll i;
    for( i=1;;i++)
    {
        ll x=pow(2,i);
        if(x>n)break;
        sum+=i+1;
    }
    i--;
    sum+=(n+1)/2;
    sum+=((n/2)-i)*2;
    cout<<sum<<endl;
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