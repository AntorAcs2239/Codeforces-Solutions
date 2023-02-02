#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, h, m;
    cin >> n >> h >> m;
    pair<int, int> ar[n];
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        ar[i].first = x;
        ar[i].second = y;
    }
    int ans1, ans2;
    int minn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (ar[i].first < h)
        {
            int t = ar[i].first + 24 - h;
            int t2 = ar[i].second;
            t = t * 60;
            t -= m;
            t += t2;
            minn = min(minn, t);
        }
        else if (ar[i].first > h)
        {
            int t = ar[i].first - h;
            int t2 = ar[i].second;
            t = t * 60;
            t -= m;
            t += t2;
            minn = min(minn, t);
        }
        else
        {
            if (m <= ar[i].second)
            {
                minn = min(minn, ar[i].second-m);
            }
            else
            {
                int t = ar[i].first + 24 - h;
                int t2 = ar[i].second;
                t = t * 60;
                t -= m;
                t += t2;
                minn = min(minn, t);
            }
        }
    }
    ans1 = minn / 60;
    ans2 = minn - ans1 * 60;
    cout << ans1 << " " << ans2 << endl;
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