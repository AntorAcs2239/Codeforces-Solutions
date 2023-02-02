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
    map<int,char>mp;
    char ch='a';
    for(int i=1;i<=26;i++)
    {
        mp[i]=ch;
        ch++;
    }
    string ans;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
            int a=s[i-1]-'0';
            int b=s[i-2]-'0';
            b*=10;
            b+=a;
            ans+=mp[b];
            i-=2;
        }
        else 
        {
            int t=s[i]-'0';
            ans+=mp[t];

        }
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
    //  solve();
    return 0;
}