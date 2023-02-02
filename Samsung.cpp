#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define gcd __gcd
int idx[200005];
int mp[200005];
void solve()
{
    ll n, m;
    cin >> n >> m;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int br[m];
    for (int i = 0; i < m; i++)
        cin >> br[i];
    for (int i = 0; i < n; i++)
    {
        if (ar[i] != 1)
        {
            if (ar[i] == 2)
                mp[2]++;
            else if (ar[i] == 3)
                mp[3]++;
            else
            {
                ll tem = ar[i];
                for (int i = 2; i <= sqrt(tem); i++)
                {
                    if (tem % i == 0)
                    {
                        while (tem % i == 0)
                        {
                            tem = tem / i;
                        }
                        mp[i]++;
                    }
                }
                if(tem>1)mp[tem]++;
            }
        }
    }
    vector<int>vec;
    for(int i=2;i<=200005;i++)
    {
        if(mp[i]>0)vec.push_back(i);
    }
    for (auto x : vec)
    {
        for(int i=0;i<m;i++)
        {
            if(br[i]%x==0)
            {
                idx[i]+=mp[x];
            }
        }
    }
    for(int i=0;i<m;i++)cout<<n-idx[i]<<endl;
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