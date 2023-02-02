#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    double n,m;
    cin>>n>>m;
    double ans=0;
    double tem=m-1;
    ans+=(tem*(tem+1))/2;
    ans+=(n/2)*((2*m+(n-1)*m));
    cout<<(long long)ans<<endl;
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