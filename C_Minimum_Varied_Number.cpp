#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    string ans;
    int t=9;
    while(n>0)
    {
        if(n>t)
        {
            ans+=t+'0';
            n-=t;
        }
        else 
        {
            ans+=n+'0';
            n=0;
        }
        t--;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
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