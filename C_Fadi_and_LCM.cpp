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
    vector<ll>vec;
    ll minn=LLONG_MAX,p,q;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(gcd(i,n/i)==1)
            {
                if(max(i,n/i)<minn)
                {
                    minn=max(i,n/i);
                    p=i;
                    q=n/i;
                }
            }
        }
    }
    cout<<p<<" "<<q<<endl;
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
}