#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>vec;
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            a++;
            if(b>0)vec.push_back(b);
            b=0;
        }
        else 
        {
            b++;
            if(a>0)vec.push_back(a);
            a=0;
        }
    }
    if(a>0)vec.push_back(a);
    else if(b>0)vec.push_back(b);
    ll ans=0;
    ll tem=0;
    for(int i=0;i<vec.size();i++)
    {
        ans+=tem+vec[i];
        tem+=vec[i];
    }
    cout<<ans;
    cout<<endl;
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