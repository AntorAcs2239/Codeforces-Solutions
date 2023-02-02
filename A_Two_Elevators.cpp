#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    int x=abs(1-a);
    int y=abs(b-c)+abs(c-1);
    if(x==y)cout<<"3"<<endl;
    else if(x<y)cout<<"1"<<endl;
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
    //  solve();
    return 0;
}