#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define gcd __gcd
int idx[200005];
int val[200005];
int paren[200005];
int level[200005];
void solve()
{
    ll n, m;
    cin >> n >> m;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        level[ar[i]] = i;
    }
    for (int i = 0; i <= n; i++)
    {
        paren[i] = -1;
    }
    int i = 1;
    while (m--)
    {
        int a, b, c;
        cin >> a;
        if (a == 1)
        {
            int u, v;
            cin >> u >> v;
            if (paren[u] == -1 && paren[v] == -1)
            {
                paren[u] = i;
                paren[v] = i;
                val[i] = min(level[u], level[v]);
                if (level[u] == level[v])
                {
                    idx[i] = max(u, v);
                }
                else if (level[u] < level[v])
                    idx[i] = u;
                else
                    idx[i] = v;
                i++;
            }
            else if (paren[u] != paren[v])
            {
                int t = paren[u];
                if (t == -1)
                {
                    t=paren[v];
                    val[t] = min(level[u], level[v]);
                    if (level[u] == level[v])
                    {
                        idx[t] = max(idx[t],u);
                    }
                    else if (level[u] < level[v])
                        idx[t] = u;
                    else
                        idx[t] = v;
                    paren[v] = t;
                    paren[u] = t;
                }
                else
                {
                    val[t] = min(level[u], level[v]);
                    if (level[u] == level[v])
                    {
                        idx[t] = max(idx[t], idx[paren[v]]);
                    }
                    else if (level[u] < level[v])
                        idx[t] = u;
                    else
                        idx[t] = v;
                    paren[v] = t;
                    paren[u] = t;
                }
            }
        }
        else if (a == 2)
        {
            int u;
            cin >> u;
            level[u]--;
            int t = paren[u];
            if (t != -1)
            {
                if (level[u] < val[t])
                {
                    val[t] = level[u];
                    idx[t] = u;
                }
                else if (level[u] == val[t])
                {
                    idx[t] = max(idx[t], u);
                }
            }
        }
        else
        {
            int u;
            cin >> u;
            if (paren[u] == -1)
            {
                cout << u << endl;
            }
            else
                cout << idx[u] << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}