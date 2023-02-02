#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007
#define gcd __gcd
vector<int> store;
bool ans = false;
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll v=1000000000000000000;
    if(n==m)
    {
        cout<<n<<endl;
        return;
    }
    if(n>m)swap(n,m);
    if(n==0)
    {
        cout<<n<<endl;
        return;
    }
    for(ll i=1;;i++)
    {
        if(n<=v/2)
        {
            n=n*2;
            if(n==m)
            {
                cout<<i+n<<endl;
                return;
            }
        }
        else break;
    }
    cout<<"-1"<<endl;
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
    return 0;
}