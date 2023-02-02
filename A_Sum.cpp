#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c)cout<<"YES"<<endl;
    else if(b+c==a)cout<<"YES"<<endl;
    else if(c+a==b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
    //  solve();
    return 0;
}