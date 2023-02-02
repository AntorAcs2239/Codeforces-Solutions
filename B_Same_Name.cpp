#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
int s(int n)
{
    int t=0;
    while(n!=0)
    {
        t+=n%10;
        n=n/10;
    }
    return t;
}
void solve()
{
    int n;
    cin>>n;
    map<pair<string,string>,int>mp;
    while(n--)
    {
        string s1,s2;
        cin>>s1>>s2;
        mp[{s1,s2}]++;
    }
    for(auto a:mp)
    {
        if(a.second>1)
        {
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
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