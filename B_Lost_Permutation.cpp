#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
     int sum=0;
     int mx=INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mp[x] = 1;
        mx=max(mx,x);
    }
    for(int i=1;;i++)
    {
        if(mp[i]==0)
        {
            sum+=i;
        }
        if(sum>=m&&i>=mx)break;
    }
    if(sum==m)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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