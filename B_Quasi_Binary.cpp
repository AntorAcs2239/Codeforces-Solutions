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
    while(n>0)
    {
        string t=to_string(n);
        string tem;
        for(int i=0;i<t.size();i++)
        {
            if(t[i]!='0')tem+='1';
            else tem+='0';
        }
        ll a=stol(tem);
        vec.push_back(a);
        n-=a;
    }
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
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