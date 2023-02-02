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
    map<char,int>mp;
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(mp[s[i]]==0)
        {
            ans+=2;
            mp[s[i]]=1;
        }
        else ans++;
    }
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
     //solve();
    return 0;
}