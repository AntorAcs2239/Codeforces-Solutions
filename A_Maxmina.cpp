#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
vector<pair<int, int>> st;
int mp[200005];
void solve()
{
    int n,k;
    cin >> n>>k;
    int ar[n];
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if(ar[i]==1)
        {
            flag=true;
        }
    }
    if(flag)cout<<"YES"<<endl;
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