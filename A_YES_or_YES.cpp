#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin>>s;
    if((s[0]=='Y'||s[0]=='y')&&(s[1]=='E'||s[1]=='e')&&(s[2]=='S'||s[2]=='s'))
    {
        cout<<"YES"<<endl;
    }
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
     //solve();
    return 0;
}