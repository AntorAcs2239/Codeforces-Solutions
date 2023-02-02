#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    ll ar[n + 1];
    ll br[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> ar[i];
    for (int i = 1; i <= n; i++)
        cin >> br[i];
    ll ans1, ans2, ans3;
    ll x = 0;
    ll maxx = 0;
    for (int i = 2; i <= n; i++)
    {
        if (ar[i] <= maxx)
        {
                x++;
                maxx++;
        }
        else
        {
            x += ar[i] - maxx+1;
            maxx = x;
        }
    }
 
    for (int i = n; i >= 1; i--)
    {
        if (br[i] <= maxx)
        {
                x++;
                maxx++;
        }
        else
        {
            x += br[i] - maxx+1;
            maxx = x;
        }
    }
    ans1 = x;
    x = 0;
    maxx = 0;
    for (int i = 1; i <= n; i++)
    {
        if (br[i] <= maxx)
        {
            x++;
            maxx++;
        }
        else
        {
            x += br[i] - maxx+1;
            maxx = x;
        }
    }
    for (int i = n; i > 1; i--)
    {
        if (ar[i] <= maxx)
        {
            x++;
            maxx++;
        }
        else
        {
            x += ar[i] - maxx+1;
            maxx =x;
        }
    }
    
    ans2 = x;
    int k = 1;
    x = 0, maxx = 0;
    for (int i = 1; i <= n;)
    {
        if (k == 1)
        {
            if (br[i] <= maxx)
            {
                x++;
                maxx++;
            }
            else
            {
                x += br[i] - maxx+1;
                maxx = x;
            }
            i++;
            k++;
        }
        else if (k == 2)
        {
            if (br[i] <=maxx)
            {
                x++;
                maxx++;
            }
            else
            {
                x += br[i] - maxx+1;
                maxx =x;
            }
            k++;
        }
        else if (k == 3)
        {
            if (ar[i] <= maxx)
            {
                x++;
                maxx++;
            }
            else
            {
                x += ar[i] - maxx+1;
                maxx = x;
            }
            i++;
            k++;
        }
        else if (k == 4)
        {
            if (ar[i] <= maxx)
            {
                x++;
                maxx++;
            }
            else
            {
                x += ar[i] - maxx+1;
                maxx = x;
            }
            k = 1;
        }
    }
  cout<<min({ans1,ans2,x})<<endl;
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