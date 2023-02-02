#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=min(a,b);i++)
    {
        cout<<"0"<<"1";
    }
    if(a<b)
    {
        for(int i=1;i<=b-a;i++)
        {
            cout<<"1";
        }
        cout<<endl;
    }
    else
    {
         for(int i=1;i<=a-b;i++)
        {
            cout<<"0";
        }
        cout<<endl;
    }
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