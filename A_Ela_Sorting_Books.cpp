#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
        mp[s[i]]++;
    string ans;
    for (int i = 1; i <= k; i++)
    {
        char c = 'a';
        int tem = 0;
        while (tem < n / k && mp[c] > 0)
        {
            tem++;
            mp[c]--;
            c++;
        }
        ans += c;
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
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