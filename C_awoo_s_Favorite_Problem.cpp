#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    string s, t;
    deque<int> a, b, c;
    cin >> s >> t;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            a.push_back(i);
        else if (s[i] == 'b')
            b.push_back(i);
        else
            c.push_back(i);
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            if (s[i] == 'a' && t[i] == 'b')
            {
                int x = -1, y = -1;
                if (!b.empty())
                    x = b.front(), b.pop_front();
                if (!c.empty())
                    y = c.front();
                if (x == -1 || i == n - 1)
                {
                    cout << "NO" << endl;
                    return;
                }
                if (y >= i && y <= x)
                {
                    cout << "NO" << endl;
                    return;
                }
                s[x] = 'a';
                s[i + 1] = 'a';
                s[i] = 'b';
            }
            else if (s[i] == 'b' && t[i] == 'c')
            {
                int x = -1, y = -1;
                if (!c.empty())
                    x = c.front(), c.pop_front();
                if (!a.empty())
                    y = a.front();

                if (x == -1 || i == n - 1)
                {
                    cout << "NO" << endl;
                    return;
                }
                if (y >= i && y <= x)
                {
                    cout << "NO" << endl;
                    return;
                }
                s[x] = 'b';
                s[i + 1] = 'b';
                s[i] = 'c';
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (s[i] == 'a' && !a.empty())
            a.pop_front();
        else if (s[i] == 'b' && !b.empty())
            b.pop_front();
        else if (!c.empty())
            c.pop_front();
    }
    cout << "YES" << endl;
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