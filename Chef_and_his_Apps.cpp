#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int s,x,y,z;
    cin>>s>>x>>y>>z;
    if(s-(x+y)>=z)
    {
        cout<<"0"<<endl;
    }
    else if(s-x>=z||s-y>=z)cout<<"1"<<endl;
    else cout<<"2"<<endl;
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
     //solve();
    return 0;
}