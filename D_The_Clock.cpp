#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    int x;
    cin >> s >> x;
    int ans = 0;
    int h = s[1] - '0';
    h += (s[0] - '0') * 10;
    int m = s[4] - '0';
    m += (s[3] - '0') * 10;
    map<string,int>mp;
    for (int i = 1; i <= 1440; i++)
    {
        m += x;
        int tem = m / 60;
        h += tem;
        h = h % 24;
        m = m % 60;
        string t;
        int a, b, c, d;
        b = h % 10;
        a = h / 10;
        d = m % 10;
        c = m / 10;
        t += a + '0';
        t += b + '0';
        t += c + '0';
        t += d + '0';
        if(t[0]==t[3]&&t[1]==t[2])
        {
            if(mp[t]==0)
            {
                ans++;
                mp[t]=1;
            }
        }
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
    // solve();
    return 0;
}