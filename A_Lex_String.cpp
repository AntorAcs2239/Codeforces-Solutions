#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll x, ll y, ll p)
{
    ll res = 1; // Initialize result

    // Update x if it is more than or
    // equal to p
    x = x % p;

    while (y > 0)
    {

        // If y is odd, multiply x
        // with the result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;
    string s1, s2;
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    string ans;
    if (s1 < s2)
    {
        int i = 0, j = 0;
        for (int p = 1; i < a && j < b; p++)
        {
            if (p % 2 == 1)
            {
                if (s1[i] < s2[j])
                {
                    int x = i;
                    while (s1[i]<s2[j] && i <min(x + k, a))
                    {
                        ans += s1[i];
                        i++;
                    }
                }
                else
                    ans += s1[i], i++;
            }
            else
            {
                if (s1[i] > s2[j])
                {
                    char ch = s2[j];
                    int x = j;
                    while (s2[j] < s1[i] && j<min(x + k, b))
                    {
                        ans += s2[j];
                        j++;
                    }
                }
                else
                    ans += s2[j], j++;
            }
        }
        cout << ans << endl;
    }
    else
    {
        int i = 0, j = 0;
        for (int p = 1; i < a && j < b; p++)
        {
            if (p % 2 == 1)
            {
                 if (s1[i] > s2[j])
                {
                    char ch = s2[j];
                    int x = j;
                    while (s2[j]<s1[i] && j < min(x + k, b))
                    {
                        ans += s2[j];
                        j++;
                    }
                }
                else
                    ans += s2[j], j++;
            }
            else
            {
                 if (s1[i] < s2[j])
                {
                    char ch = s1[i];
                    int x = i;
                    while (s1[i]<s2[j] && i < min(x + k, a))
                    {
                        ans += s1[i];
                        i++;
                    }
                }
                else
                    ans += s1[i], i++;
            }
        }
        cout << ans << endl;
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