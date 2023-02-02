#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, m;
    cin >> n >> m;
    int ar[n][m];
    int t = 0;
    for (int i = 0; i < n; i += 2)
    {
        int x = 1;
        for (int j = 0; j < m; j += 2)
        {
            if (t % 2 == 0)
            {
                if (x % 2 == 1)
                {
                    ar[i][j] = 0;
                    ar[i][j + 1] = 1;
                    ar[i + 1][j] = 1;
                    ar[i + 1][j + 1] = 0;
                }
                else
                {
                    ar[i][j] = 1;
                    ar[i][j + 1] = 0;
                    ar[i + 1][j] = 0;
                    ar[i + 1][j + 1] = 1;
                }
                x++;
            }
            else
            {
                if (x % 2 == 1)
                {
                    ar[i][j] = 1;
                    ar[i][j + 1] = 0;
                    ar[i + 1][j] = 0;
                    ar[i + 1][j + 1] = 1;
                }
                else
                {
                    ar[i][j] = 0;
                    ar[i][j + 1] = 1;
                    ar[i + 1][j] = 1;
                    ar[i + 1][j + 1] = 0;
                }
                x++;
            }
        }
        t++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cout<<ar[i][j]<<" ";
        cout<<endl;
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